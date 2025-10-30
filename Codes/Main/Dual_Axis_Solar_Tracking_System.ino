#include <Servo.h>

Servo servoX;  // Horizontal movement
Servo servoY;  // Vertical movement

// LDR sensor pins
#define LDR_TL A0
#define LDR_TR A1
#define LDR_BL A2
#define LDR_BR A3

// Servo pins
#define SERVO_X 9
#define SERVO_Y 10

// Servo angles
int posX = 90;  // Start from center
int posY = 90;

const int stepDelay = 20;    // Delay between adjustments (ms)
const int tol = 50;          // Light difference tolerance

void setup() {
  servoX.attach(SERVO_X);
  servoY.attach(SERVO_Y);

  pinMode(LDR_TL, INPUT);
  pinMode(LDR_TR, INPUT);
  pinMode(LDR_BL, INPUT);
  pinMode(LDR_BR, INPUT);

  servoX.write(posX);
  servoY.write(posY);
  delay(1000);
}

void loop() {
  int tl = analogRead(LDR_TL);
  int tr = analogRead(LDR_TR);
  int bl = analogRead(LDR_BL);
  int br = analogRead(LDR_BR);

  int topAvg = (tl + tr) / 2;
  int bottomAvg = (bl + br) / 2;
  int leftAvg = (tl + bl) / 2;
  int rightAvg = (tr + br) / 2;

  int vertDiff = topAvg - bottomAvg;
  int horizDiff = leftAvg - rightAvg;

  // --- Vertical Control (Y-axis) ---
  if (abs(vertDiff) > tol) {
    if (vertDiff > 0 && posY < 170) posY++;   // Too much light on top → tilt up
    if (vertDiff < 0 && posY > 10)  posY--;   // Too much light on bottom → tilt down
    servoY.write(posY);
  }

  // --- Horizontal Control (X-axis) ---
  if (abs(horizDiff) > tol) {
    if (horizDiff > 0 && posX > 10)  posX--;  // Light stronger on left → move left
    if (horizDiff < 0 && posX < 170) posX++;  // Light stronger on right → move right
    servoX.write(posX);
  }

  delay(stepDelay);
}
