void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  Serial.begin(9600);
}
byte income=0;
void loop() 
{
  if(Serial.available()>0){
  	  income=Serial.read();
      income=income-'0';
      digitalWrite(8,LOW);
      digitalWrite(2,income&0x1);
      digitalWrite(3,(income>>1)&0x1);
      digitalWrite(4,(income>>2)&0x1);
      digitalWrite(5,(income>>3)&0x1);
      digitalWrite(8,HIGH);
    
  	  income=Serial.read();
      income=income-'0';
      digitalWrite(9,LOW);
      digitalWrite(2,income&0x1);
      digitalWrite(3,(income>>1)&0x1);
      digitalWrite(4,(income>>2)&0x1);
      digitalWrite(5,(income>>3)&0x1);
      digitalWrite(9,HIGH);
    
  	  income=Serial.read();
      income=income-'0';
      digitalWrite(10,LOW);
      digitalWrite(2,income&0x1);
      digitalWrite(3,(income>>1)&0x1);
      digitalWrite(4,(income>>2)&0x1);
      digitalWrite(5,(income>>3)&0x1);
      digitalWrite(10,HIGH);
    
  	  income=Serial.read();
      income=income-'0';
      digitalWrite(11,LOW);
      digitalWrite(2,income&0x1);
      digitalWrite(3,(income>>1)&0x1);
      digitalWrite(4,(income>>2)&0x1);
      digitalWrite(5,(income>>3)&0x1);
    digitalWrite(11,HIGH);
  }
  delay(1000);
}
