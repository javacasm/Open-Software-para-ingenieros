int pinRele=7;
int pinSensorH=A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinRele,OUTPUT);
  pinMode(pinSensorH,INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Humedad=analogRead(pinSensorH);
  Serial.println(Humedad);
  if(Humedad>549)
  {
    digitalWrite(pinRele,LOW);
    Serial.println("OFF");
  }

  if(Humedad<450)
  {
    digitalWrite(pinRele,HIGH);    
    Serial.prinln("ON");
  }
  delay(60*1000);
}
