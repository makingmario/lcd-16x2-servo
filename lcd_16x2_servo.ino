
// Incluimos la librería LCD 16x2
#include <LiquidCrystal.h>

//Inicializamos la pantalla LCD
//Potenciometro: 
//pin 1 a 5V pin 3 a GND y pin central a VO de la LCD
        //RS, EN, Db4, Db5, Db6, Db7
LiquidCrystal lcd(12, 11,  5,   4,   3,   2);

// Incluimos la librería para Servo
#include <Servo.h>

Servo servoBase;//Asigno un nombre específico

void setup() {
   servoBase.attach(A1);//Pin a utilizar para servo
   servoBase.write(0);  //asigno 0 al servo motor
  
  // Iniciamos la LCD con 16 columnas y 2 filas
  lcd.begin(16, 2);
  lcd.print("LCD Servo Making");
  lcd.setCursor(0, 1);
  lcd.print("RoboticsColombia");
  delay(3000);
  lcd.clear(); 
}

void loop() {
 lcd.setCursor(0,0);//(x,y) x de 0 a 15 y de 0 a 1
 lcd.print("Servo Posicion");
  for(int i=0; i<=180; i=i+10)
  {
   lcd.setCursor(0,1);
   lcd.print(i); 
   servoBase.write(i);
   delay(2000);
  }
 lcd.clear(); 
}
