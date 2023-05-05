/* Defining a class called `SensorLuz` with private member variables `pinSensorLuz`, `pinLED`,
`valorUmbral` and `ledEncendido`. These variables are used to store information
about a light sensor and an LED connected to an Arduino board. */
class SensorLuz {
  private:
    int pinSensorLuz;
    int pinLED;
    int valorUmbral;
    bool ledEncendido;

  /* This is a constructor for the `SensorLuz` class. It takes three parameters: `pinSensorLuz`,
  `pinLED`, and `valorUmbral`. The constructor initializes the private member variables of the class
  with the values passed as parameters. It also sets the `ledEncendido` variable to false. 
   Finally, it sets the pinMode of `pinSensorLuz` to INPUT and `pinLED` to OUTPUT. */
  public:
    SensorLuz(int pinSensorLuz, int pinLED, int valorUmbral) {
      this->pinSensorLuz = pinSensorLuz;
      this->pinLED = pinLED;
      this->valorUmbral = valorUmbral;
      this->ledEncendido = false;

      pinMode(pinSensorLuz, INPUT);
      pinMode(pinLED, OUTPUT);
    }

/**
 * The function "leerLuz" reads the analog value from a light sensor and returns it.
 * 
 * @return The function `leerLuz()` is returning an integer value which is the reading obtained from
 * the analog pin `pinSensorLuz`.
 */
    int leerLuz() {
      int lectura = analogRead(pinSensorLuz);
      return lectura;
    }

/**
 * The function "encenderLED" turns on an LED if it is not already on and the light reading is above a
 * certain threshold.
 */
    void encenderLED() {
      if (!ledEncendido && leerLuz() > valorUmbral) {
        digitalWrite(pinLED, HIGH);
        ledEncendido = true;
      }
    }

 /**
  * The function turns off an LED if it is currently on and the light level is below a certain
  * threshold.
  */
    void apagarLED() {
      if (ledEncendido && leerLuz() < valorUmbral) {
        digitalWrite(pinLED, LOW);
        ledEncendido = false;
      }
    }
};


/* `SensorLuz sensorLuz(A0, 2, 500);` is creating an instance of the `SensorLuz` class called
`sensorLuz` with the parameters `A0`, `2`, and `500`. This initializes the private member variables
of the `sensorLuz` object with the values passed as parameters in the constructor of the `SensorLuz`
class. */
SensorLuz sensorLuz(A0, 2, 500);

/**
 * This function initializes the serial communication with a baud rate of 9600.
 */
void setup() {
  Serial.begin(9600);
}


void loop() {
  int lecturaLuz = sensorLuz.leerLuz();
  Serial.println(lecturaLuz);
  sensorLuz.encenderLED();
  sensorLuz.apagarLED();
  delay(100);
}
