const int led1 = 13;
const int led2 = 11;
const int led3 = 9;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);   
  delay(500);              
  digitalWrite(led1, LOW);    
  delay(500);
  digitalWrite(led2, HIGH);   
  delay(500);              
  digitalWrite(led2, LOW);    
  delay(500);
  digitalWrite(led3, HIGH);   
  delay(500);              
  digitalWrite(led3, LOW);    
  delay(500); 
}
