#define LED_PIN 2  
const int ledOffBoard = 4;
const int buttonPin = 5;  


bool lastButtonState = HIGH;  
bool currentButtonState;  

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    pinMode(ledOffBoard, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);  
}

void loop() {

    digitalWrite(LED_PIN, HIGH);
    delay(1000);                   
    digitalWrite(LED_PIN, LOW);    
    delay(1000);                   

    currentButtonState = digitalRead(buttonPin);

    if (lastButtonState == HIGH && currentButtonState == LOW) {

        digitalWrite(ledOffBoard, HIGH);
        Serial.println("LED Ligado!");
        
        delay(50); 
    } else if (lastButtonState == LOW && currentButtonState == HIGH){
       digitalWrite(ledOffBoard, LOW);
       Serial.println("LED Desligado");
    }

    lastButtonState = currentButtonState;  
}