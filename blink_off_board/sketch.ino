#define LED_PIN 2  
const int ledOffBoard = 4;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    pinMode(ledOffBoard, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(ledOffBoard, HIGH);   
    delay(1000);                   
    digitalWrite(LED_PIN, LOW);   
    digitalWrite(ledOffBoard, LOW); 
    delay(1000);                   
}