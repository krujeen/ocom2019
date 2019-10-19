#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int c[11]={2,4,6,8,10,12,14,24,43,64,86};
  int max=c[0];
  for(int i=0;i<11;i++){
    if(c[i]>max)
    {
      max=c[i];
    }
  }
  printf("%d",max);
  return 0;
}
