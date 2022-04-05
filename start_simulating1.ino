int pir = 2;
int led = 3;

void setup()
{
  pinMode(2, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int i = digitalRead(pir);
  Serial.print(i);
  if (i==i)
  {
  digitalWrite(led,HIGH);
    delay(10000);
  
  }
  else
  {
  digitalWrite(led,LOW);
   delay(10000);
  }

}