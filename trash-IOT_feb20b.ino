#include <uTimerLib.h>
#include <Adafruit_MQTT.h>
#include <Adafruit_MQTT_Client.h>
#include <WiFi.h>
#include <HCSR04.h>

WiFiClient wiFiClient;
Adafruit_MQTT_Client mqttClient(&wiFiClient, "192.168.0.103", 1883);
Adafruit_MQTT_Publish distancePublisher(&mqttClient, "/distance");

UltraSonicDistanceSensor distanceSensor(19, 18);

void distanceState() {
 
  double distance = distanceSensor.measureDistanceCm();
  Serial.println(distance);
  
  if(distance < 10 && distance>0){
   distancePublisher.publish(distance);  
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
 WiFi.begin("createch2019", "createch2019");
  delay(5000);
  
Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
   TimerLib.setInterval_s(distanceState, 2);

  }
void loop() {
  // put your main code here, to run repeatedly:
  
if (mqttClient.connected()) {
    mqttClient.processPackets(10000);
    mqttClient.ping();
  } else {
    mqttClient.disconnect();
    mqttClient.connect();
  } 
}
