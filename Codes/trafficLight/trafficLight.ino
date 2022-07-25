void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);//red
  pinMode(10, OUTPUT);//yellow
  pinMode(11, OUTPUT);//green
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(9, HIGH);//turn red on
  delay(6000);          //wait 6 seconds
  digitalWrite(9, LOW);//turn red off
  delay(50);           //wait 50 milliseconds 
  digitalWrite(10, HIGH);//turn yellow on
  delay(2000);          //wait 2 seconds
  digitalWrite(10, LOW);//turn yellow off
  delay(50);            //wait 50 milliseconds 
  digitalWrite(11, HIGH);//turn green on
  delay(5000);          //wait 5 seconds
  digitalWrite(11, LOW);//turn green off
  delay(50);           //wait 50 milliseconds                        
}
