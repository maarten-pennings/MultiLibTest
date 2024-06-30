// mltSketch1.ino: generate a multiplication table
#include <mltLib2.h>

const unsigned t = 12;

unsigned v;
void setup() {
  Serial.begin(115200);
  Serial.printf("\n\nWelcome to mltSketch1.ino\n");
  v=1;
}

void loop() {
  delay(500);
  if( v<=10 ) {
    Serial.printf("%2u * %u =%3u\n",v,t,mltLib2_mult(v,t));
    v = v+1;
  }
}
