#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int A[]={1,2,3,4,5,6,7,8,9,10};
  int B[]={2,4,6,8,10,12,14,9,25};
  int i,j,count=0,U;
  int sA = sizeof(A)/sizeof(int);
  int sB = sizeof(B)/sizeof(int);
  for(i=0;i<sA;i++)
  {
    for(j=0;j<sB;j++)
    {
      if(A[i]==B[j]) count++;
    }
  }
  U=sA+sB-count;
  printf("%d",U);
  return 0;
}
