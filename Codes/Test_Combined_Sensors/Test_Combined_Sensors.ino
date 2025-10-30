int LDR_TL = A0, LDR_TR = A1, LDR_BL = A2, LDR_BR = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int tl = analogRead(LDR_TL);
  int tr = analogRead(LDR_TR);
  int bl = analogRead(LDR_BL);
  int br = analogRead(LDR_BR);

  int top = (tl + tr) / 2;
  int bottom = (bl + br) / 2;
  int left = (tl + bl) / 2;
  int right = (tr + br) / 2;

  Serial.print("VertDiff: "); Serial.print(top - bottom);
  Serial.print("\tHorizDiff: "); Serial.println(left - right);
  delay(300);
}
