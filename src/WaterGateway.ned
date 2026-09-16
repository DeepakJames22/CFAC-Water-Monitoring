package cfac_water_monitoring;

simple WaterGateway
{
    parameters:
        string gatewayType = default("central_gateway");
        @display("i=device/server");
    gates:
        input in[5];
}
