#include <iostream>
#include <stdio.h>
using namespace std;
int Top (int n)
{
 int num=0;
 for (int i=1;i<=n;i++)
    num += i;
 return num;
}

int main() 
{
  int n;
  int k=0,countk=0;
  int i,j;
  int l,m=1;

  cin>>n;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(i==0)                  printf("%3d ",Top(++k)); 
      else if (i==j && i+1==n)  printf("%3d ",n*n);
      else if (j==0)            printf("%3d ",Top(i)+1);
      else if (i+j<n)           printf("%3d ",Top(++k)+j+1);
      else if (i+j==n){
        l=Top(k+1)+j;           printf("%3d ",l);
      }
      else {
        l+=n-m++;               printf("%3d ",l);
        if(j==n-1) m=1;
      }           
    } 
    if(k<=n) k=++countk;
    cout<<endl;
  }
  return 0;
}
