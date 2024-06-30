#include <mltLib1.h>

unsigned n;
void setup() {
  Serial.begin(115200);
  Serial.printf("\n\nmltLib1.ino\n");
  n=10;
}

void loop() {
  delay(1000);
  if( n<20) Serial.printf("%u %u %u\n",n,mltLib1_dub(n),mltLib1_half(n));
  n++;
}