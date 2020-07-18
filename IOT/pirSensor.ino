int code;
int calibration_time=30;
long unsigned int lowIn;
long unsigned int pause=500;
boolean locklow=true;
int takelowtime,i,pirpin=3,ledpin=11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pirpin,INPUT);
  pinMode(ledpin,OUTPUT);
  digitalWrite(pirpin,LOW);
  Serial.println("Calibration sensor:");
  for(i=0;i<calibration_time;i++)
  {
    Serial.print(",");
    delay(10);
  }
  Serial.println("Done");
  Serial.println("sensor active");
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pirpin)==HIGH)
  {
    digitalWrite(ledpin,HIGH);
    if(locklow)
    {
      locklow=false;
      Serial.println("-----");
      Serial.println("Motion detected @ ");
      Serial.print(millis()/100);
      Serial.println("sec");
      delay(50);
    }
    takelowtime=true;
    
  }
  if(digitalRead(pirpin)==LOW)
  {
    digitalWrite(ledpin,LOW);
    if(takelowtime)
    {
      lowIn=millis();
      takelowtime=false;
      //LowPhase
    }
    if(!locklow && millis()-lowIn>pause)
    {
      locklow=true;
      Serial.print("Motion Ended @ ");
      Serial.print((millis()-pause)/1000);
      Serial.println("sec");
      delay(50);
    }
  }
  
}
