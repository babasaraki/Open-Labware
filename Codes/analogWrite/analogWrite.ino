void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);//red
  pinMode(10, OUTPUT);//yellow
  pinMode(11, OUTPUT);//green
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, 255);//turn red on
  delay(10);          //wait 6 seconds
  analogWrite(9, 0);//turn red off
  delay(100);           //wait 50 milliseconds 
  analogWrite(10, 255);//turn yellow on
  delay(10);          //wait 2 seconds
  analogWrite(10, 0);//turn yellow off
  delay(100);            //wait 50 milliseconds 
  analogWrite(11, 255);//turn green on
  delay(10);          //wait 5 seconds
  analogWrite(11, 0);//turn green off
  delay(100);           //wait 50 milliseconds                        
}
