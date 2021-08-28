int ldr1;
int ldr2;
int led1 = 8;
int led2 = 9;
int senseval1 = 0;
int senseval2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  ldr1 = analogRead(A0);
  ldr2 = analogRead(A1);

  Serial.println(ldr1);
  Serial.println(ldr2);
  delay(100);

  for (int i = 0; i < 20; i++)
  {
    if (ldr1 < 1)
    {
      digitalWrite(led1, HIGH);
    }
    else
    {
      digitalWrite(led1, LOW);
    }

    if (ldr2 < 1)
    {
      digitalWrite(led2, HIGH);
    }
    else
    {
      digitalWrite(led2, LOW);
    }
  }
}
