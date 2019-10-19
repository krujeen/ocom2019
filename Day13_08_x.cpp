#include <iostream>
#include<math.h>
using namespace std;

int main()
{
  int a, b, c;
  float xn,xp,x;
  scanf("%d%d%d", &a,&b,&c);
  if(a==0 && b!=0)
  {
    x=-(c/b);
    printf("%.2f",x);
  }
  else if ((b*b)-(a*c*4)<0)
  {
    printf("ERROR!");
  }
  else
  {
    xp=(sqrt((b*b)-(4*a*c))-b)/(2*a);
    xn=-(sqrt((b*b)-(4*a*c))+b)/(2*a);
    printf("x1= %.2f \nx2= %.2f", xn,xp);
  }
  return 0;
}
