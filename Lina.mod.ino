
const int sensorPin= A0;
const int electro = 10;
int humedad;//Valor de la humedad actual de la planta
int humedadcorte;//Humedad que fija el usuario girando el potenciómetro.
int control=8;//Pin que activa o no el relé


void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(electro, OUTPUT);
  //lcd.begin(16, 2);
  Serial.begin(9600);
  // Print a message to the LCD.
 //
 humedad=0.12*analogRead(0);//Convierte la lectura del sensor a %.
 humedadcorte=0.07*analogRead(1)+15;//Convierte la lectura del potenciómetro a %. La

}

void loop() {
  
 int value = analogRead(sensorPin);
  float millivolts = (value / 1023.0) * 5000;
  float celsius = millivolts / 10; 
  //lcd.print(celsius);>
  
 
   int humedad = analogRead(sensorPin);
   // lcd.print(humedad);
   digitalWrite(electro, HIGH); 
    if(humedad > 500) {
     digitalWrite(electro, HIGH);
    // lcd.print("Apagado");
    }  
   else
   {
        digitalWrite(electro, LOW);
     
   }
  delay(1000);

}

