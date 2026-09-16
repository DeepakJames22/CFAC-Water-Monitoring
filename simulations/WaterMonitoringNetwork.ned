package cfac_water_monitoring.simulations;

import cfac_water_monitoring.WaterSensor;
import cfac_water_monitoring.WaterGateway;

network WaterMonitoringNetwork
{
    submodules:
        waterLevelSensor1: WaterSensor {
            @display("p=120,100");
        }
        waterLevelSensor2: WaterSensor {
            @display("p=120,200");
        }
        waterLevelSensor3: WaterSensor {
            @display("p=120,300");
        }
        pressureSensor: WaterSensor {
            @display("p=120,400");
        }
        leakSensor: WaterSensor {
            @display("p=120,470");
        }
        gateway: WaterGateway {
            @display("p=500,280");
        }
    connections:
        waterLevelSensor1.out --> gateway.in[0];
        waterLevelSensor2.out --> gateway.in[1];
        waterLevelSensor3.out --> gateway.in[2];
        pressureSensor.out --> gateway.in[3];
        leakSensor.out --> gateway.in[4];
}
