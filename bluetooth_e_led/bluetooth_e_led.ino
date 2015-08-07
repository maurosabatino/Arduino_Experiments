void setup ()
{
  Serial.begin(9600);
  pinMode (7, OUTPUT);
}
void loop ()
{
  char c = Serial.read();
  if (c == 'H')
  {
    digitalWrite (7, HIGH);
  }
  if (c == 'L')
  {
    digitalWrite (7, LOW);
  }
}
