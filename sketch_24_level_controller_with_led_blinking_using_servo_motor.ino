#include <Servo.h>

int x;
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
Servo myservo_a;

void setup() {
  myservo_a.attach(9);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  x = map(x, 0, 1023, 90, 180);
  Serial.println(x);
  myservo_a.write(x);
  delay(100);

  // Reset all pins
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);

  if (x >= 90 && x <= 95) {
    digitalWrite(a, HIGH);
  }
  if (x > 110 && x <= 175) {
    digitalWrite(b, HIGH);
  }
  if (x > 132 && x <= 175) {
    digitalWrite(c, HIGH);
  }
  if (x > 155 && x <= 175) {
    digitalWrite(d, HIGH);
  }
  if (x > 175 && x <= 180) {
    digitalWrite(e, HIGH);
  }
  if (x > 5 && x <= 85) {
    digitalWrite(f, HIGH);
    delay(100);
    digitalWrite(f, LOW);
    delay(100);
  }
}
