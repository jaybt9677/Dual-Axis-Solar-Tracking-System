void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
}

void loop() {
  Serial.print("TL: "); Serial.print(analogRead(A0));
  Serial.print("\tTR: "); Serial.print(analogRead(A1));
  Serial.print("\tBL: "); Serial.print(analogRead(A2));
  Serial.print("\tBR: "); Serial.println(analogRead(A3));
  delay(500);
}
