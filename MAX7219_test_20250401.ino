#include <MD_MAX72xx.h>

#define DATA_PIN  23
#define CLK_PIN   19
#define CS_PIN    5
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 1

MD_MAX72XX mx(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

void setup() {
  mx.begin();
  mx.clear();
  mx.control(MD_MAX72XX::INTENSITY, 8);
  for (int i = 0; i < 8; i++) {
    mx.setRow(0, i, 0xFF); // 點亮所有 LED
  }
}

void loop() {
}