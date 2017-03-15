const byte LED=13;
void setup() 
{
  Serial.begin(9600);
  Serial.print("Hello ");
  Serial.println("World.");
  pinMode(LED,OUTPUT);
  
}
void loop() 
{
  char val;
  if(Serial.available() )
 {
  val = Serial.read();
  switch(val)
  {
    case '0':
      digitalWrite(LED,LOW);
      Serial.println("LED OFF");
      break;
    case '1':
      digitalWrite(LED,HIGH);
      Serial.println("LED ON");
      break;
      
  }
 } 

}
