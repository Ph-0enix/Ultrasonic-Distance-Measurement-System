//NOT WORKING SHOULD BE DEBUGGED

#include <LiquidCrystal.h>
int trigPin=2;
int echoPin=3;
int pingTravelTime;
float pingTravelDistance;
float distanceToTarget;
int buttonPin=A0;
int buttonVal;
int dt(3000);
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;

int numMeas=50;
float avMeas;
int j;
float bucket=0.00;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buttonPin,INPUT);
  digitalWrite(buttonPin,HIGH);
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print("Place the Target");
  lcd.setCursor(0,1);
  lcd.print("Press Button");
  buttonVal=digitalRead(buttonPin);
  while(buttonVal==1){
    buttonVal=digitalRead(buttonPin);
  }
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Measuring....");
  for (j=1;j<=numMeas;j=j+1);
  {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(100);
  digitalWrite (trigPin,LOW);
  pingTravelTime=pulseIn(echoPin,HIGH);
  delay (50);
  pingTravelDistance=(pingTravelTime*1235.*39370.)/(36.*100000000);
  distanceToTarget=pingTravelDistance/2;
  bucket=bucket+distanceToTarget;
  Serial.print(bucket);
  }
   
  avMeas=bucket/numMeas;
  Serial.print("Avg. Dist. to Target is");
  Serial.print(avMeas);
  Serial.println("inches.");
  delay (500);
  lcd.setCursor(0,0);
  lcd.print("Target Distance:");
  lcd.setCursor(0,1);
  lcd.print(avMeas);
  lcd.print(" inches.");
  delay (dt);

}
