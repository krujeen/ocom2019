#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
 int b=0,d,k=1;
 cin>>d;
 while(d!=0){
   b+=(d%2)*k;
   k*=10;
   d/=2;
 }
  cout<<b;
  return 0;
}
