int ledPin = 9;
int buttonPin = 5;
int buttonState = 1;
void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop(){
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin, buttonState);
}
