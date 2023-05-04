# Sensor de luz con Arduino

Este proyecto utiliza un Arduino y un sensor de luz para medir la intensidad de la luz y encender un LED cuando la intensidad de la luz supera un umbral predefinido. Se ha desarrollado una clase en C++ llamada `SensorLuz` que permite leer la intensidad de la luz utilizando el conversor analógico a digital de Arduino y encender el LED cuando la intensidad de la luz supera un valor umbral predefinido.

El circuito consta de un fotoresistor conectado al pin A0 de Arduino y una resistencia de 10kΩ, y un LED conectado al pin 2 digital de Arduino. La clase `SensorLuz` se utiliza en un programa que lee la intensidad de la luz, la muestra en el monitor serial de Arduino y enciende o apaga el LED según corresponda.

## Contenido del repositorio

- `sensor_luz.ino`: programa que utiliza la clase `SensorLuz` para medir la intensidad de la luz y encender o apagar el LED según corresponda.
- `SensorLuz.h`: archivo de cabecera que define la clase `SensorLuz`.
- `SensorLuz.cpp`: archivo de implementación que define los métodos de la clase `SensorLuz`.
- `LICENSE`: licencia de uso del código fuente.

## Requisitos

- Arduino UNO o similar.
- Sensor de luz (fotoresistor) y resistencia de 10kΩ.
- LED y resistencia de 220Ω.
- Cableado y protoboard.

## Uso

1. Conectar el fotoresistor al pin A0 de Arduino y la resistencia de 10kΩ. Conectar el LED al pin 2 digital de Arduino y la resistencia de 220Ω.
2. Descargar los archivos `SensorLuz.h` y `SensorLuz.cpp` y colocarlos en la carpeta de sketchbook de Arduino.
3. Abrir el archivo `sensor_luz.ino` en el entorno de desarrollo de Arduino.
4. Compilar y cargar el programa en Arduino.
5. Observar la intensidad de la luz en el monitor serial de Arduino y verificar que el LED se enciende cuando la intensidad de la luz supera el umbral predefinido.

## Créditos

23__ϱ
