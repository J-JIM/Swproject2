#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  count = toggle = 0;

}

void loop() {
  digitalWrite(PIN_LED, HIGH);
  delay(1000);
  while(1){
    Serial.println(++count);

    pinMode(PIN_LED, toggle);
    toggle = !toggle;
    delay(100);
    if(count == 10){
      break;
    }
  }

}
