void cirArea() {

  int r = 8;
  float area = 3.14 * r * r;
  Serial.println(area);
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  cirArea();//執行程式
  delay(500));
}