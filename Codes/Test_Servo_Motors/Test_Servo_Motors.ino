#include <Servo.h>
Servo servoX;
Servo servoY;

void setup() {
  servoX.attach(9);
  servoY.attach(10);
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 5) {
    servoX.write(pos);
    servoY.write(180 - pos);
    delay(50);
  }
  for (int pos = 180; pos >= 0; pos -= 5) {
    servoX.write(pos);
    servoY.write(180 - pos);
    delay(50);
  }
}
