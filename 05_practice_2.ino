void setup()
{
  pinMode(7, OUTPUT); // analog output
}

void loop()
{
  int i;
  digitalWrite(7, LOW);
  delay(1000);       
  for (i=1; i<=10; i++)
  {
    if(i%2 == 1){
      digitalWrite(7,HIGH);
      delay(100);
    } else {
      digitalWrite(7, LOW);
      delay(100);
    }
  }
  digitalWrite(7,HIGH);
  while(1){}   
}
