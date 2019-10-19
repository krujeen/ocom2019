#include <iostream>
#include <stdio.h>
#include<math.h>



int main() {
  int x1=1,y1=1,x2=4,y2=4,x3=9,y3=-1;
  float a;
  a = abs(((x1*y2)+(x2*y3)+(x3*y1)-(x2*y1)-(x3*y2)-(x1*y3))*0.5);
  printf("%.2f",a);
  
  return 0;
}
