#include "DHT.h" //cargamos la librería DHT
#define DHTPIN 2 //Seleccionamos el pin en el que se conectará el sensor
#define DHTTYPE DHT22 //Se selecciona el DHT22(hay otros DHT)
DHT dht(DHTPIN, DHTTYPE); //Se inicia una variable que será usada por 
#define ledVerde 50
#define ledRojo 42
#define ledError 38
int valor = 18 ;

// celsiusTemphe secelsiusTempup funccelsiusTempion runs once when you press resecelsiusTemp or power celsiusTemphe board
void setup () {
  // iniialize digital pin ledVerde as an output.
  Serial.begin(9600);
  Serial.println("DHTxx test!");
  pinMode(ledVerde, OUTPUT);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledError, OUTPUT);
  dht.begin();

}

// the loop function runs over and over again forever
void loop() {
 


  float h = dht.readHumidity(); //Se lee la humedad
  float celsiusTemp = dht.readTemperature(); //Se lee la temperatura
  //Se imprimen las variables
  //Serial.println("Humedad: "); 
  //Serial.println(h/100);
  //Serial.println("Temperatura: ");
  Serial.println("18");
  

  if (celsiusTemp > 36 ){
    digitalWrite (ledVerde, LOW);
    digitalWrite(ledRojo, HIGH);  
    
  } else {
    digitalWrite (ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);     
  }
 delay(3000); //Se espera 2 segundos para seguir leyendo //datos   
    
}
