## 1. Librerías y dependencias

| Librería | Versión | Uso en el proyecto | Fuente |
| :--- | :--- | :--- | :--- |
| Wire.h | Nativa | Comunicación I2C para la pantalla OLED | https://www.arduino.cc/reference/en/language/functions/communication/wire/ |
| Adafruit_GFX.h | 1.11.9 | Biblioteca base para gráficos de Adafruit | https://github.com/adafruit/Adafruit-GFX-Library |
| Adafruit_SSD1306.h | 2.5.9 | Controlador específico para la pantalla OLED 128x32 | https://github.com/adafruit/Adafruit_SSD1306 |

## 2. Uso de Inteligencia Artificial

### 1. Modelado General y Encapsulado (Fusion 360)
* **Herramienta:** Gemini (Google)
* **Uso:** Apoyo conceptual y guía de aprendizaje. Se utilizó para resolver dudas sobre el uso de herramientas específicas en Fusion 360, optimización de ensambles y técnicas de modelado para impresión 3D del contenedor.
* **Comprensión:** Permitió agilizar el flujo de trabajo en el software de diseño sin experiencia previa avanzada.

### 2. Logica de Control y Firmware (main.ino)
* **Herramienta:** Claude 3.5 Sonnet (Anthropic)
* **Prompt:** "Generar codigo completo en C++ para ESP32 que mida distancia con sensor ultrasonico HC-SR04, calcule el porcentaje inverso de llenado para un contenedor de 30cm, y despliegue alertas dinamicas ('LLENO' / 'ESCANEE QR') en una pantalla OLED SSD1306 I2C de 128x32."
* **Adaptacion y Comprensión:** Se analizó la estructura generada por la IA para asegurar la correcta asignación de los pines GPIO 5 (Trig) y 18 (Echo). El equipo comprendió la lógica del cálculo inverso (altura - distancia) y las condiciones de control que limitan el porcentaje estrictamente entre 0% y 100%.
