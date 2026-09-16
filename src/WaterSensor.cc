#include <omnetpp.h>

using namespace omnetpp;

class WaterSensor : public cSimpleModule
{
  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
};

Define_Module(WaterSensor);

void WaterSensor::initialize()
{
    EV_INFO << "Water sensor initialized." << endl;
}

void WaterSensor::handleMessage(cMessage *msg)
{
    delete msg;
}

