#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
  int dec=0,bin,i=1;
  scanf("%d",&bin);
  while(bin!=0)
  {
    dec+=bin%10*i;
    i*=2;
    bin/=10;
  }
  printf("%d",dec);
  
  
  return 0;
}
