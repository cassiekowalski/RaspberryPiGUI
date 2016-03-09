#include <iostream>
#include <QDebug>
#include "nodeCommunication.h"

using namespace std;

RF24 radio(RPI_V2_GPIO_P1_15, BCM2835_SPI_CS0, BCM2835_SPI_SPEED_8MHZ);
RF24Network network(radio);
RF24Mesh mesh(radio,network);

void nodeCommunication::run()
{
    nodeUpdate();
}

int nodeCommunication::nodeUpdate() {
    mesh.setNodeID(0);
    mesh.begin();
    int vectorSize = 0;
    QString nameStr = "Room ";
    QString roomStr = "";
    int roomCounter = 1;

    while(1)
    {
      mesh.update();
      mesh.DHCP();
      while(network.available())
      {
        RF24NetworkHeader header;
        network.peek(header);

        incomingData in;

        switch(header.type)
        {
            case 'M': network.read(header,&in,sizeof(in));
                    //get current size of vector
                    vectorSize = roomAry.size();
                    if (vectorSize !=0){
                        //loop through vector to check if the nodeId already exists
                        for (int i=0;i<vectorSize;i++){
                            if(roomAry[i].nodeId == in.nodeid){
                                //if this nodeId exists, update it
                                roomAry[i].currTemp = 65;//in.currentTemperature;
                                roomAry[i].fanSpeed = in.currentFanSpeed;
                                roomAry[i].servoPosition = in.currentServoPosition;
                                roomAry[i].pressure = in.currentPressure;
                                qDebug() << "Existing node updated.";
                            }
                            else{
                                //need to add this nodeId as a new room
                                room *r = new room();
                                roomStr = QString::number(roomCounter);
                                r->name = nameStr + roomStr;
                                r->nodeId = in.nodeid;
                                r->currTemp = in.currentTemperature;
                                r->fanSpeed = in.currentFanSpeed;
                                r->servoPosition = in.currentServoPosition;
                                r->pressure = in.currentPressure;
                                roomAry.push_back(*r);
                                roomCounter++;
                                qDebug() << "New node found. Node saved.";
                            }
                        }
                    }
                    else{
                        //list of rooms is currently empty, need to add this nodeId as a new room
                        room *r = new room();
                        roomStr = QString::number(roomCounter);
                        r->name = nameStr + roomStr;
                        r->nodeId = in.nodeid;
                        r->currTemp = in.currentTemperature;
                        r->fanSpeed = in.currentFanSpeed;
                        r->servoPosition = in.currentServoPosition;
                        r->pressure = in.currentPressure;
                        roomAry.push_back(*r);
                        roomCounter++;
                        qDebug() << "New node found. Node saved.";
                    }

                    //printf("%u, %u, %u, %u, %f\n", in.nodeid, in.currentTemperature, in.currentFanSpeed, in.currentServoPosition, in.currentPressure);
                    break;
            default:
                    payload_t payload;
                    network.read(header, &payload, sizeof(payload));
        }
      }
      delay(2000);

        outgoingData out;
        out.nodeid = 9;
        out.fanSpeed = 200;
        out.servoPosition = 10;
        mesh.write(&out, 'N', sizeof(out), out.nodeid);

        delay(2000);

        outgoingData out2;
        out2.nodeid = 9;
        out2.fanSpeed = 100;
        out2.servoPosition = 170;
        mesh.write(&out2, 'N', sizeof(out2), out2.nodeid);
    }
    return 0;
}
      
