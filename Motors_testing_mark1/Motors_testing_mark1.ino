/*
 * this testing code for motor output on mechamouse:
 * main contributers: Matthew Alaniz, Stephnie Cabrera
 */

int led = 13; // test led


//motor functions and variable declarations------------------------------------------------------------------------------------------------------------------------
//START OF FUNCTION DECLARATIONS
void rightFor(double);
void rightRev(double);
void leftFor(double);
void leftRev(double); 
//END OF FUNCTION DECLARATIONS


//Right Motor
int rightMotorEn = 8; // Right Motor Enable
int rightMotorFor = 9; // Right Motor Forward
int rightMotorRev = 10; // Right Motor Reverse 
//int rightMotorA = 11; // Right Motor A reading
//int rightMotorB = 12; // Right Motor A reading


//Left Motor
int leftMotorEn = 2; // Left Motor Enable
int leftMotorFor = 4; // Left Motor Forward
int leftMotorRev = 3; // Left Motor Reverse 
//int leftMotorA = 5; // Left Motor A reading
//int leftMotorB = 6; // Left Motor B reading



//setup, varaiables, as outputs and endputs etc.  --------------------------------------------------------------------------------------------------------------------------
void setup() {
 // put your setup code here, to run once:
//sensor,output--------------------------------------------------------------
//Right Motor
pinMode(rightMotorEn, OUTPUT);
pinMode(rightMotorFor, OUTPUT);
pinMode(rightMotorRev, OUTPUT);
//pinMode(rightMotorA, INPUT);
//pinMode(rightMotorB, INPUT);



//Left Motor
pinMode(leftMotorEn, OUTPUT);
pinMode(leftMotorFor, OUTPUT);
pinMode(leftMotorRev, OUTPUT);
//pinMode(leftMotorA, INPUT);
//pinMode(leftMotorB, INPUT);

//LED
pinMode(led, OUTPUT); // test led


}

//main loop ----------------------------------------------------------------------------------------------------------------------
void loop() {
  // put your main code here, to run repeatedly

rightFor(150);
leftFor(150);

//start-----------
//follow through with rest of agorithm
//Right Forward 
//rightFor(150);


//Left Forward
//(100);
//leftFor(150);

}
void rightFor(double rightSpeed){
  digitalWrite(rightMotorEn, HIGH);
  digitalWrite(rightMotorRev, LOW);
  analogWrite(rightMotorFor, rightSpeed);
}

void leftFor(double leftSpeed){
  digitalWrite(leftMotorEn, HIGH);
  digitalWrite(leftMotorRev, LOW);
  analogWrite(leftMotorFor, leftSpeed);
}


void rightRev(double rightSpeed){
  digitalWrite(rightMotorEn, HIGH);
  digitalWrite(rightMotorFor, LOW);
  analogWrite(rightMotorRev, rightSpeed);
}

void leftRev(double leftSpeed){
  digitalWrite(leftMotorEn, HIGH);
  digitalWrite(leftMotorFor, LOW);
  analogWrite(leftMotorRev, leftSpeed);
}


  
