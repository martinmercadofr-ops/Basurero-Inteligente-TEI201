# Basurero Inteligente - TEI201
* Un basurero inteligente IoT que mide el porcentaje de llenado en espacios compartidos de la universidad. El sistema genera una alerta dinámica en una pantalla OLED y muestra un código QR cuando llega al límite programado, avisando de forma oportuna al personal de limpieza para evitar la acumulación de residuos y la contaminación del entorno.

## 👥 Integrantes
* Martín Mercado
* Joaquín Meléndez
* Fernanda Gonzales
* Valentina Santana

## 🚨 Problema que resuelve
- Falta de información en tiempo real sobre el estado de capacidad de los contenedores de basura en espacios universitarios comunes, lo que genera retrasos en el retiro de residuos, desbordamientos, malos olores y focos de contaminación ambiental.

## 🛠️ Componentes Utilizados
* Arduino ESP32
* Sensor HC-SR04
* Pantalla OLED 0.91
* Battery Shield 5V
* Protoboard

## 🚀 Instrucciones de Uso e Instalación
* Primero conexiones:
* 5V ESP-32 -> Linea Roja 1 Protoboard
* GND ESP-32 -> Linea Azul 1 Protoboard

* 3v3 ESP-32 -> Linea Roja 2 Protoboard
* GND ESP-32 -> Linea Azul 2 Protoboard

* VCC Sensor -> Linea Roja 1 Protoboard
* GND Sensor -> Linea Azul 1 Protoboard
* Trig Sensor -> G5 ESP-32
* Echo Sensor -> G18 ESP-32

* VCC Pantalla -> Linea Roja 2 Protoboard
* GND Pantalla -> Linea Azul 2 Protoboard 
* SCL Pantalla -> G22 ESP-32
* SDA Pantalla -> G21 ESP-32

* Pila:
* 5V Shield -> Linea Roja 1 Protoboard
* GND Shield -> Linea Azul 1 Protoboard

* Luego, poner el sensor, pantalla y pila en sus respectivas bases, amar la carcasa del basurero y colocar el sistema electrico en la parte del medio.


### 1. Clonar el repositorio
```bash
git clone https://github.com/martinmercadofr-ops/Basurero-Inteligente-TEI201.git
```
