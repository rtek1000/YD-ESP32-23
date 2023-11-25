/*
  BlinkRGB - soft

  Demonstrates usage of onboard RGB LED on some ESP dev boards.

  Calling digitalWrite(RGB_BUILTIN, HIGH) will use hidden RGB driver.

  RGBLedWrite demonstrates controll of each channel:
  void neopixelWrite(uint8_t pin, uint8_t red_val, uint8_t green_val, uint8_t blue_val)

  WARNING: After using digitalWrite to drive RGB LED it will be impossible to drive the same pin
    with normal HIGH/LOW level
*/
//#define RGB_BRIGHTNESS 64 // Change white brightness (max 255)

// the setup function runs once when you press reset or power the board

#define RGB_BUILTIN 48

void setup() {
  // No need to initialize the RGB LED
}

// the loop function runs over and over again forever
void loop() {
  // White
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, i, i, i); // White

    delay(1);
  }

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, i, i, i); // White

    delay(1);
  }

  // Red
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, i, 0, 0); // Red

    delay(1);
  }

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, i, 0, 0); // Red

    delay(1);
  }

  // Green
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, 0, i, 0); // Green

    delay(1);
  }

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, 0, i, 0); // Green

    delay(1);
  }

  // Blue
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, 0, 0, i); // Blue

    delay(1);
  }

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, 0, 0, i); // Blue

    delay(1);
  }
}
