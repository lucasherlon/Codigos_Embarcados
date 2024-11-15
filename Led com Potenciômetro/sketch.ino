const int ledPin = 4;           
const int potenciometroPin = 15; 
const int builtInLed = 2;        
unsigned long previousMillis = 0; 
const long interval = 500;       
bool ledState = false;   

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(builtInLed, OUTPUT);
}

void loop() {
  int valorPotenciometro = analogRead(potenciometroPin);
  int valorPWM = map(valorPotenciometro, 0, 1023, 0, 255);
   
  analogWrite(ledPin, valorPWM);
  
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ledState = !ledState; 
    digitalWrite(builtInLed, ledState);
  }
}
