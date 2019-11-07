// This #include statement was automatically added by the Particle IDE.
#include <InternetButton.h>

InternetButton b = InternetButton();


void setup() {

b.begin();
}

void loop() {

b.ledOn(1, 0, 255, 0);
  b.ledOn(11, 0, 255, 0);
   b.ledOn(4, 0, 255, 0);
 b.ledOn(5, 0, 255, 0);
 b.ledOn(6, 0, 255, 0);
 b.ledOn(7, 0, 255, 0);
 b.ledOn(8, 0, 255, 0);

}
