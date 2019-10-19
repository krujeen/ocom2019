#include <iostream>
#include <stdio.h>

using namespace std;
int gcd(int a,int b)
{ int t;
  while(b!=0)
  { 
    t=b;
    b=a%b;
    a=t;
  }
  return a;
}
int gcd2(int x,int y)
{
  if(x<y)
  {
    int temp;
    temp = x;
    x = y;
    y = temp;
  }
  if(x%y==0) return y;
  return gcd(x%y,y);
  
}
int main()  
{ 
  int x,y,z,value;
  scanf("%d%d%d",&x,&y,&z);
  value=gcd2(gcd2(x,y),z);
  value=gcd(gcd(x,y),z);
  printf("%d",value);
  
  return 0;
}

