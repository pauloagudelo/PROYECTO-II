#include <SoftwareSerial.h>
#define TxD 0
#define RxD 1
#define KEY 4
#define VCC 5

int valor; 

SoftwareSerial Bluetooth(TxD,RxD);

void setup() { 
  Bluetooth.begin(9600);
  pinMode(KEY,OUTPUT);
  pinMode(VCC,OUTPUT);

  digitalWrite(KEY,HIGH);
  digitalWrite(VCC,LOW);

  digitalWrite(VCC,HIGH);

  Serial.begin (9600);
   
}
 void loop(){
  valor= analogRead(A0);
  Serial.println(valor);
  delay(1000);
  char comando = Bluetooth .read();
  switch(comando){
    Bluetooth.println(valor);
    delay(1000);
    break;
    
    
  }
 }

