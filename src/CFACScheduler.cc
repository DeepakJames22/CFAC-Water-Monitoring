#include <omnetpp.h>
#include <algorithm>

using namespace omnetpp;

class CFACScheduler : public cSimpleModule
{
  protected:
    double calculatePriority(double criticality, double freshness);

    virtual void initialize() override;
};

Define_Module(CFACScheduler);

double CFACScheduler::calculatePriority(double criticality, double freshness)
{
    return criticality + freshness;
}

void CFACScheduler::initialize()
{
    EV_INFO << "CFAC scheduler initialized." << endl;

    double criticality = 1.0;
    double freshness = 1.0;

    double priority = calculatePriority(criticality, freshness);

    EV_INFO << "Initial CFAC priority: " << priority << endl;
}
