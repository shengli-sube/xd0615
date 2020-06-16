int i=0;
void setup()
{
  for(i=0;i<8;i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<7;i++){
    digitalWrite(i, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(200); // Wait for 1000 millisecond(s)
  }
  for(i=7;i>=1;i--){
    digitalWrite(i, HIGH);
    delay(200); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(200); // Wait for 1000 millisecond(s)
  }
}