int r=2;
int g=3;
int b=4;
int i,j,k;
void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*for(i=0;i<256;i+=5)
  {
    analogWrite(r,i);
    for(j=0;j<256;j+=5)
    {
      analogWrite(g,j);
      for(k=0;k<256;k+=5)
      {
        
        
        analogWrite(b,k);
        delay(100);
      }
      
    }
  }*/
  analogWrite(r,110);
  analogWrite(b,100);
  analogWrite(g,0);
  
  
  
  
}
