#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Configuración de la pantalla OLED
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Configuración de pines (según tus instrucciones)
const int trigPin = 5;  // G5
const int echoPin = 18; // G18

// --- CONFIGURA ESTO ---
const float alturaBasurero = 30.0; // Altura total en cm (ajústala a tu basurero real)
// -----------------------

void setup() {
  Serial.begin(115200);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Iniciar pantalla
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("OLED no encontrado"));
    for(;;);
  }
  
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
  display.display();
}

void loop() {
  // 1. Medir distancia con el sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  float distancia = duration * 0.034 / 2;

  // 2. Calcular porcentaje (Inverso: a menos distancia, más lleno)
  // Si la distancia es mayor a la altura, el basurero está vacío (0%)
  float llenadoCm = alturaBasurero - distancia;
  int porcentaje = (llenadoCm / alturaBasurero) * 100;
  
  // Limitar porcentaje entre 0 y 100
  if (porcentaje < 0) porcentaje = 0;
  if (distancia > alturaBasurero) porcentaje = 0;
  if (porcentaje > 100) porcentaje = 100;

  // 3. Mostrar en pantalla
  display.clearDisplay();
  
  if (porcentaje >= 80) {
    // MENSAJE DE LLENO (80% o más)
    display.setTextSize(2);
    display.setCursor(0, 0);
    display.println("LLENO");
    display.setTextSize(1);
    display.setCursor(0, 20);
    display.println("ESCANEE QR");
  } else {
    // MODO NORMAL (Muestra porcentaje)
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.print("Nivel de llenado:");
    
    display.setTextSize(2);
    display.setCursor(30, 15);
    display.print(porcentaje);
    display.print("%");
  }
  
  display.display();
  delay(1000); // Actualiza cada segundo
}
