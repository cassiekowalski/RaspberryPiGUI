#ifndef NODECOMMUNICATION_H
#define NODECOMMUNICATION_H

#include "RF24Mesh/RF24Mesh.h"
#include <RF24/RF24.h>
#include <RF24Network/RF24Network.h>
#include <iostream>
#include <QThread>
#include <QVector>

class nodeCommunication : public QThread
{
protected:
    void run();

public:
    int nodeUpdate();
    struct room
    {
        int nodeId;
        QString name;
        int currTemp;
        int prefTemp;
        int servoPosition;
        int pressure;
        int fanSpeed;
    };

    QVector<room> roomAry;

    struct incomingData
    {
        int16_t nodeid;
        int16_t currentTemperature;
        int16_t currentFanSpeed;
        int16_t currentServoPosition;
        float currentPressure;
    };

    struct outgoingData
    {
        int16_t nodeid;
        int16_t fanSpeed;
        int16_t servoPosition;
    };

    struct payload_t
    {
        unsigned long ms;
        unsigned long counter;
    };

};

#endif // NODECOMMUNICATION_H
