int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int i = 0;
int incomingByte[8];


void setup()
{
  Serial.begin(57600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);


}

void loop()
{
  if (Serial.available() >= 8)
  {
    for (int i=0; i<8;i++)
    {
      incomingByte[i] = Serial.read();
    }
    digitalWrite(led1, incomingByte[0]);
    digitalWrite(led2, incomingByte[1]);
    digitalWrite(led3, incomingByte[2]);
    digitalWrite(led4, incomingByte[3]);
    digitalWrite(led5, incomingByte[4]);
    digitalWrite(led6, incomingByte[5]);
    digitalWrite(led7, incomingByte[6]);
    digitalWrite(led8, incomingByte[7]);

  }
}
