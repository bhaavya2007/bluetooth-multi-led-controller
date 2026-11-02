char x;
int led=10;
int blue=5;
int green=3;
int brightness=100;
int brightness2=100;
int brightness3=100;
int check=1;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  if(Serial1.available()){
    x=Serial1.read();
    Serial.println(x);
  
  if(x=='1'){
    check=1;
    analogWrite(led,brightness);
  }
  else if(x=='2'){
    check=2;
    analogWrite(blue,brightness2);
  }
  else if(x=='3'){
    check=3;
    analogWrite(green,brightness3);
  }
  else if(x=='4'){
    analogWrite(led,brightness);
    analogWrite(blue,brightness2);
    analogWrite(green,brightness3);
  }
  else if(x=='0'){
    analogWrite(blue,0);
    analogWrite(led,0);
    analogWrite(green,0);
  }
  else if(x=='+'){
    if(check==2 && brightness2<=240){
      brightness2+=10;
      Serial.println(brightness2);
      analogWrite(blue,brightness2);
    }
    else if(check==1 && brightness<=240){
      brightness+=10;
      Serial.println(brightness);
      analogWrite(led,brightness);
    }
    else if(check==3 && brightness3<=240){
      brightness3+=10;
      Serial.println(brightness3);
      analogWrite(green,brightness3);
    }
  }
  else if(x=='-'){
    if(check==2 && brightness2>=20){
      brightness2-=10;
      Serial.println(brightness2);
      analogWrite(blue,brightness2);
    }
    else if(check==1 && brightness>=20){
      brightness-=10;
      Serial.println(brightness);
      analogWrite(led,brightness);
    }
    else if(check==3 && brightness3>=20){
      brightness3-=10;
      Serial.println(brightness3);
      analogWrite(green,brightness3);
    }
    
  }
}}
