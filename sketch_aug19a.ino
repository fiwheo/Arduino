int led[]={2,3,4,5,6,7,8,9,10,11,12,13};
void setup(){
 
  for (int i=0;i<sizeof(led);i++){
    pinMode(led[i],OUTPUT);
      digitalWrite(led[i],LOW);
  }
  
}
void loop(){
  for (int i=0;i<sizeof(led);i++){
    digitalWrite(led[i],HIGH);
    delay(100);
  }
  for (int i=0;i<sizeof(led);i++){
     digitalWrite(led[i],LOW);
    delay(100);
  }
}
