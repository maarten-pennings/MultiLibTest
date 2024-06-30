// mltLib2.cpp - implementation for lib2 in the MultiLibTest
#include <mltLib1.h> // mltLib1_dub()
#include <mltLib2.h>


unsigned mltLib2_mult(unsigned x, unsigned y) {
  // X*Y = res+x*y
  unsigned res=0;
  while( y>0 ) {
    if( y%2==0 ) {
      x = mltLib1_dub(x);
      y = mltLib1_half(y);
    } else {
      res = res+x;
      y = y-1;
    }
  }
  return res;
}

