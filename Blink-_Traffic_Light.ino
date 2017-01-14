/*
 */
 

int led = 13;
void setup() {                
  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);  
  delay(1000);                
  digitalWrite(led, LOW);   
  delay(1000);                
  digitalWrite(led, HIGH);    
  delay(2000);  
  digitalWrite(led, LOW);    
  delay(2000);  
  digitalWrite(led, HIGH);    
  delay(3000);  
  digitalWrite(led, LOW);    
  delay(3000);  
}

int led2 = 14;
void setup() {                
  pinMode(led2, OUTPUT);     
}


void loop() {
if led(LOW){
  digitalWrite(led2, HIGH);
  delay(1000);
}
}
int led3 = 15;
void setup() {                
  pinMode(led3, OUTPUT);     
}


void loop() {
if led and led2(LOW){
  digitalWrite(led3, HIGH);
  delay(1000)
}
}

}