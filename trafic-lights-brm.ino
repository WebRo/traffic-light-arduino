//Traffic lights. C++ arduino OOP, Written by Bayram Alak www.web12.ro.
//This example code is in the public domain.

using namespace std;

int ledPins[] = {
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13
};

int pinCount = 12;

void setup() {
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(ledPins[thisPin], OUTPUT);
  };

}

void loop() {

  class Trafics

  {
    public:

      Trafics(int red, int yallow, int green) {
        delay(50);
        digitalWrite(red, HIGH);
        digitalWrite(yallow, LOW);
        digitalWrite(green, LOW);
        delay(3000);
        //-----------
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        digitalWrite(yallow, LOW);
        delay(3000);
        //----------------
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(yallow, HIGH);
        delay(2000);
        digitalWrite(yallow, LOW);
        digitalWrite(red, HIGH);

      }

  };

  int redPins[] = {
    2,
    5,
    8,
    11
  };
  for (int redPin = 0; redPin < 4; redPin++) {
    digitalWrite(redPins[redPin], HIGH);
  };

  Trafics trafic1(2, 3, 4);
  Trafics trafic2(5, 6, 7);
  Trafics trafic3(8, 9, 10);
  Trafics trafic4(11, 12, 13);

}
