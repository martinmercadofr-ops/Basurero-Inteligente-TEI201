Wire.h (Libreria nativa de Arduino para comunicacion I2C)
* Adafruit_GFX.h (v1.11.9) - Biblioteca base para graficos de Adafruit
* Adafruit_SSD1306.h (v2.5.9) - Controlador especifico para la pantalla OLED 128x32

### 1. Modelado General y Encapsulado (Fusion 360)
* **Herramienta:** Gemini (Google)
* **Uso:** Apoyo conceptual y guia de aprendizaje. Se utilizo para resolver dudas sobre el uso de herramientas especificas en Fusion 360, optimizacion de ensambles y tecnicas de modelado para impresion 3D del contenedor.
* **Comprension:** Permitio agilizar el flujo de trabajo en el software de diseno sin experiencia previa avanzada.

### 2. Logica de Control y Firmware (main.ino)
* **Herramienta:** Claude 3.5 Sonnet (Anthropic)
* **Prompt:** "Generar codigo completo en C++ para ESP32 que mida distancia con sensor ultrasonico HC-SR04, calcule el porcentaje inverso de llenado para un contenedor de 30cm, y despliegue alertas dinamicas ('LLENO' / 'ESCANEE QR') en una pantalla OLED SSD1306 I2C de 128x32."
* **Adaptacion y Comprension:** Se analizo la estructura generada por la IA para asegurar la correcta asignacion de los pines GPIO 5 (Trig) y 18 (Echo). El equipo comprendio la logica del calculo inverso ($altura - distancia$) y las condiciones de control que limitan el porcentaje estrictamente entre 0% y 100%.
