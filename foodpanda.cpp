#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  float price,c=1;
  scanf("%f",&price);
  if(price>= 1200)    c=30;
  else if(price>=600) c=20;
  else if(price>=200) c=10;
  else c=0;
  printf("%.2f",price-(price/100*c));
  return 0;
}
