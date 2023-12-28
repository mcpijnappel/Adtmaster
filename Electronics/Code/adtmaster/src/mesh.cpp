#include "general.h"
#include "mesh.h"

painlessMesh mesh;

void meshSetup(){

    mesh.init("Weegschaal", "wachtwoordofzo", 420, WIFI_AP_STA, 6);
    // mesh.setRoot(true);
    mesh.setContainsRoot(false);
    mesh.onNewConnection(&changedConnectionsCallback);
    mesh.onReceive(&receivedCallback);

}

void meshLoop(){


}

void changedConnectionsCallback(uint32_t nodeId)
{
    // Serial.println(String("newNode:") + nodeId);
    mesh.sendSingle(nodeId, "Hello root node here");
    auto nodes = mesh.getNodeList(true);
            String str = "nodeList";
            nodeCount = -1;
            for (auto &&id : nodes){
                str += String("/") + String(id);
                nodeCount =nodeCount+ 1;
                }
    Serial.println(str);
    // BlinkMode("Green");
}
// get the IP of the node on the WiFi network


// this function is called when a message is received on the mesh network
void receivedCallback(const uint32_t &from, const String &msg)
{

    Serial.printf("%u:%s\n", from, msg.c_str());
   

}