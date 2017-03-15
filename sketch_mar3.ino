float R1=1.91;
float R2=965500;
float sensorValue,sensorVoltage;
float  ResisterValue;
void setup() 
{
  pinMode(A1,INPUT);
  ResisterValue = 965501.91;
  Serial.begin(9600);

}

void loop() 
{
  int i;
  for(i=0;i<=5;i++)
    {
      sensorValue=0.85*sensorValue+0.15*analogRead(A1);
     }
   sensorVoltage=sensorValue*5/1024;
   R1=sensorVoltage*965501.91/5;
   Serial.println(sensorValue);
   Serial.println(sensorVoltage);
   Serial.println(R1);
   delay(1000);
   
}
