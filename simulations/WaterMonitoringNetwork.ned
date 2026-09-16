package cfac_water_monitoring.simulations;

import cfac_water_monitoring.WaterSensor;
import cfac_water_monitoring.WaterGateway;
import cfac_water_monitoring.PriorityScheduler;

network WaterMonitoringNetwork
{
    submodules:
        sensor1: WaterSensor {
            @display("p=100,100");
        }
        sensor2: WaterSensor {
            @display("p=100,200");
        }
        sensor3: WaterSensor {
            @display("p=100,300");
        }
        sensor4: WaterSensor {
            @display("p=100,400");
        }
        sensor5: WaterSensor {
            @display("p=100,500");
        }
        scheduler: PriorityScheduler {
            @display("p=350,300");
        }
        gateway: WaterGateway {
            @display("p=600,300");
        }

    connections:
        sensor1.out --> scheduler.in;
        sensor2.out --> scheduler.in;
        sensor3.out --> scheduler.in;
        sensor4.out --> scheduler.in;
        sensor5.out --> scheduler.in;

        scheduler.out --> gateway.in[0];
}
