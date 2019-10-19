#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
 int n,r;
 unsigned long long int sum=1;
 scanf("%d %d",&n,&r);
 
 /*for(int i=n;i>n-r;i--)
 {
   sum *=i;
 }*/
 for(int i=0;i<r;i++)
 {
   sum = sum*(n-i);
 }
 
 printf("%llu",sum);
  
  return 0;
}
