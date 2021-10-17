char command;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    command = Serial.read();
    Serial.println("Stop");
    switch (command) {
      case 'F':
        Serial.println("avance");
        delay(18);
        break;
      case 'B':
        Serial.println("recule");
        delay(18);
        break;
      case 'R':
        Serial.println("droite");
        delay(18);
        break;
      case 'L':
        Serial.println("gauche");
        delay(18);
        break;
    }
  }
}
