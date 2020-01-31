int led = 7;
char  i;


void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    i = Serial.read();
    Serial.println(i);

    if (i == '1') {
      digitalWrite(led, HIGH);
      delay(10);
    }

    else if (i == '0'){
      digitalWrite(led, LOW);
      delay(10);
    }
  }
}
