#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main() {
  int n,s=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    s+=pow((2*i-1),2);
  }
  
  int a=1;
  for(int i=1;i<=n;i++)
  {
    s+=a*a;
    a=a+2;
  }
  cout<<s;
  return 0;
}
