#include<Servo.h>
int var;
Servo s1;
Servo s2;
Servo s3;
/*Servo s2;
Servo s3;
Servo s4;*/
String msg = "angle: ";
void setup() {

  // put your setup code here, to run once:
s1.attach(3);
s2.attach(4);
s3.attach(5);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0){
String servoCheck = Serial.readString();
var = servoCheck.substring(2,5).toInt();
if(servoCheck.substring(0,2) == "s1"){Serial.println(msg+var); s1.write(var);}
else if (servoCheck.substring(0,2) == "s2"){Serial.println(msg+var); s2.write(var);}
else if (servoCheck.substring(0,2) == "s3"){Serial.println(msg+var); s3.write(var);}
//else if (servoCheck == "s490"){if (servoCheck.substring(1)=="4"){s4.write(var);}}*/
else{Serial.println("error");}
}
}
