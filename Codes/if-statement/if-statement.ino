const int BUTTON = 5; // Naming switch button pin
const int LED1 = 9;   // Naming LED pin
const int LED2 = 10;
const int LED3 = 11;
int BUTTONstate = 1; // A variable to store Button Status / Input

void setup(){  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode (BUTTON, INPUT);
 }
 
void loop() {
  BUTTONstate = digitalRead(BUTTON);  // Reading button status / input
  if (BUTTONstate == 0)  // Condition to check button input
  {
   digitalWrite(LED1, HIGH);
   delay(1000);
   digitalWrite(LED1, LOW);
   
   digitalWrite(LED2, HIGH);
   delay(1000);
   digitalWrite(LED2, LOW);
   
   digitalWrite(LED3, HIGH);
   delay(1000);
   digitalWrite(LED3, LOW);
  }
}
