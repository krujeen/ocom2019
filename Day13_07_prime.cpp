#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main () 
{
  int n,i,flag=1;
  float  temp;
//  cin >> x;
  temp=sqrt(x);
  if (x==1 || (x%2==0 && x!=2 ))
    flag=0;
  else{
    for(i=3;i<=temp;i+=2){
      if(x%i==0){
        flag=0;
        break;
      }
    }
  }
  if(flag)       // flag==1
    cout << "is prime";
  else
    cout << "is not prime";
  return 0;
}
