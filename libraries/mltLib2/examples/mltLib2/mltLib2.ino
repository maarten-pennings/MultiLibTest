#include <mltLib2.h>

void setup() {
  Serial.begin(115200);
  Serial.printf("\n\nmltLib2.ino\n");
}

void loop() {
  delay(2000);
  unsigned x = random(100);
  unsigned y = random(100);
  Serial.printf("%u * %u = %u\n",x,y,mltLib2_mult(x,y));
}