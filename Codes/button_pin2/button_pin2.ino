const int BUTTON = 5; // Naming switch button pin
const int LED = 11;   // Namin LED pin
int BUTTONstate = 0; // A variable to store Button Status / Input

void setup(){ 
  pinMode(LED, OUTPUT);
  pinMode (BUTTON, INPUT);
 }
 
void loop() {
  BUTTONstate = digitalRead(BUTTON);  // Reading button status / input
  if (BUTTONstate == LOW)  // Condition to check button input
    {
      digitalWrite(LED, HIGH);
    }
    else
    {
      digitalWrite(LED, LOW);
    }
}
