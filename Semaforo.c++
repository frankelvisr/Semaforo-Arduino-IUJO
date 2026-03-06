// C++ code
//
int agrgar = 0;

int counter;

int counter2;

int counter3;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  for (counter = 0; counter < 6; ++counter) {
    digitalWrite(10, HIGH);
    delay(250); // Wait for 250 millisecond(s)
    digitalWrite(10, LOW);
    delay(250); // Wait for 250 millisecond(s)
  }
  digitalWrite(9, HIGH);
digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  for (counter2 = 0; counter2 < 6; ++counter2) {
    digitalWrite(6, HIGH);
    delay(250); // Wait for 250 millisecond(s)
    digitalWrite(6, LOW);
    delay(250); // Wait for 250 millisecond(s)
  }
