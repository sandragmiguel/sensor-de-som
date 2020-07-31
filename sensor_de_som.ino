int pinSensorSom = 2;
int pinLed = 3;
int estadoSensor;
void setup() {
 pinMode (pinSensorSom, INPUT);
 pinMode (pinLed, OUTPUT);
}

void loop() {
  int estadoSensor = digitalRead (pinSensorSom);
  if(estadoSensor == 1){
    digitalWrite(pinLed, HIGH);
  }
  else {
    digitalWrite(pinLed, LOW);
  }
}
