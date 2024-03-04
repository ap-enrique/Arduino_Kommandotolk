#define PIN_LED 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    String command = Serial.readString();
    Serial.println("Du skrev in: " + command);
    if(command == "on") {
      digitalWrite(PIN_LED, HIGH);
    } else if(command == "off"){
      digitalWrite(PIN_LED, LOW);
    }
  }
}
