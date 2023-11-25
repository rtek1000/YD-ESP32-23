/*
  BlinkRGB - random crazy

  Demonstrates usage of onboard RGB LED on some ESP dev boards.

  Calling digitalWrite(RGB_BUILTIN, HIGH) will use hidden RGB driver.

  RGBLedWrite demonstrates controll of each channel:
  void neopixelWrite(uint8_t pin, uint8_t red_val, uint8_t green_val, uint8_t blue_val)

  WARNING: After using digitalWrite to drive RGB LED it will be impossible to drive the same pin
    with normal HIGH/LOW level
*/
//#define RGB_BRIGHTNESS 64 // Change white brightness (max 255)

#define RGB_BUILTIN 48

uint8_t new_color = 0;
uint8_t previous_color = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // No need to initialize the RGB LED
}

// the loop function runs over and over again forever
void loop() {
  while (new_color == previous_color) {
    new_color = random(0, 5);
  }

  previous_color = new_color;

  switch (new_color) {
    case 0:
      color_while();
      break;
    case 1:
      color_red();
      break;
    case 2:
      color_green();
      break;
    case 3:
      color_blue();
      break;
    case 4:
      color_black();
      break;
    default:
      break;
  }
}

void color_while(void) {
  // White
  uint8_t rand_stop = random(0, 255);

  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, i, i, i); // White

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }

  rand_stop = random(0, 255);

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, i, i, i); // White

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }
}

void color_red(void) {
  uint8_t rand_stop = random(0, 255);

  // Red
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, i, 0, 0); // Red

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }

  rand_stop = random(0, 255);

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, i, 0, 0); // Red

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }
}

void color_green(void) {
  uint8_t rand_stop = random(0, 255);

  // Green
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, 0, i, 0); // Green

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }

  rand_stop = random(0, 255);

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, 0, i, 0); // Green

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }
}

void color_blue(void) {
  uint8_t rand_stop = random(0, 255);

  // Blue
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, 0, 0, i); // Blue

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }

  rand_stop = random(0, 255);

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, 0, 0, i); // Blue

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }
}

void color_black(void) {
  uint8_t rand_stop = random(0, 255);

  // Black
  for (uint8_t i = 0; i < 255; i++) {
    neopixelWrite(RGB_BUILTIN, 0, 0, 0); // Black

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }

  rand_stop = random(0, 255);

  for (uint8_t i = 255; i > 0; i--) {
    neopixelWrite(RGB_BUILTIN, 0, 0, 0); // Black

    delay(1);

    if (i == rand_stop) {
      break;
    }
  }
}
