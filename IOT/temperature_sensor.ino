int op=0;
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  int rawvolt=analogRead(op);
  float millivolts=(rawvolt/1024.0)*5000;
  float cel=millivolts/10;
  Serial.print("Cel is = ");
  Serial.println(cel);
  Serial.print("far is = ");
  Serial.println((cel*9)/5+32);
  delay(500);
}
