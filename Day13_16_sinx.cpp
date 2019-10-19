#include<stdio.h>
#include<math.h>
long long int factorial(int n){
  long long int f=1;
  for(int i=n;i>=1;i--)
    f*=i;
  return f;
}
double sinx(int degree){
  float radian=(degree*3.141592)/180;
  double sin=0;
  for(int n=0;n<15;n++)
    sin += pow(-1,n)*pow(radian,2*n+1)/factorial(2*n+1);
  return sin;
}
int main(){
  int degree;
  scanf("%d",&degree);
  double k=sinx(degree);
  printf("sin(%d) = %.2lf",degree,k);
}
