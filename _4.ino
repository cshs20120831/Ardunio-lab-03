float sensorValue,sensorVoltage;
void setup() 
{
  pinMode(A1,INPUT);
  Serial.begin(9600);

}

void loop() 
{
  int i;
  for(i=0;i<=5;i++)
    {
      sensorValue=0.7*sensorValue+0.3*analogRead(A1);
     }
   sensorVoltage=sensorValue*5/1024;
  
   Serial.println(sensorVoltage);
   delay(1000);
   
}
