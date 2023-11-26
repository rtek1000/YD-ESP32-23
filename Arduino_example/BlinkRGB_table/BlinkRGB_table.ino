/*
  BlinkRGB - color table 888

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

// See: https://barth-dev.de/online/rgb565-color-picker/
#define RED_888 0xff0000
#define GREEN_888 0x00ff00
#define BLUE_888 0x0000ff
#define YELLOW_888 0xe5a50a
#define ORANGE_888 0xc64600
#define PURPLE_888 0x613583
#define BROWN_888 0x63452c

uint32_t color_table[7] = {RED_888, GREEN_888, BLUE_888, YELLOW_888, ORANGE_888, PURPLE_888, BROWN_888};

void setup() {
  // No need to initialize the RGB LED
}

// the loop function runs over and over again forever
void loop() {
  // White
  for (uint8_t i = 0; i < 7; i++) {
    uint8_t r = (color_table[i] >> 16) & 0xFF;
    uint8_t g = (color_table[i] >> 8) & 0xFF;
    uint8_t b = color_table[i] & 0xFF;
    
    neopixelWrite(RGB_BUILTIN, r, g, b); // White

    delay(500);
  }

}
