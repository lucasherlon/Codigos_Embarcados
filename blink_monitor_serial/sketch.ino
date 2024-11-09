#define LED_PIN 2  
const int ledOffBoard = 4;
String command;

void setup() {
    Serial.begin(115200);  
    pinMode(LED_PIN, OUTPUT);
    pinMode(ledOffBoard, OUTPUT);
}

void loop() {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);                   
    digitalWrite(LED_PIN, LOW);    
    delay(1000);                   


    if (Serial.available()) {
        command = Serial.readStringUntil('\n');  
        command.trim();  
        
        if (command == "on") {
            digitalWrite(ledOffBoard, HIGH);
            Serial.println("LED Ligado!");
        }
        else if (command == "off") {
            digitalWrite(ledOffBoard, LOW);
            Serial.println("LED Desligado!");
        }
    }
}