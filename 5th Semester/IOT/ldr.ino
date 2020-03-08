
int ldr=A0;
int ledpin=11;
void setup() {
  // put your setup code here, to run once:
pinMode(0,INPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(ldr);
int threshold=100;
if(value<threshold)
  digitalWrite(ledpin,HIGH);
else
  digitalWrite(ledpin,LOW);
}
