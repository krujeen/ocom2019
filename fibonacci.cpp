#include <iostream>
#include <stdio.h>
using namespace std;
int main() 
{
  int n;
  cin>>n;
  int fibo[n];
  fibo[0]=0;
  fibo[1]=1;
  fibo[2]=1;
  for(int i=3;i<n;i++)
  {
    fibo[i]=fibo[i-1]+fibo[i-2];
  }
  for(int i=0;i<n;i++)
  {
    cout<<fibo[i];
    if(i!=n) cout<<' ';
  }
  return 0;
}
