#include <iostream>
#include <stdio.h>
using namespace std;

void strcpy(char *s,char *t)
{
  while((*s++=*t++)!='\0');
}

void strcat(char *s,char *t)
{
  while(*s!='\0') s++;
  strcpy(s,t);
}
int main()
{
  char A[]="ABC";
  char B[]="DEFG";
  cout<<A<<endl<<B<<endl;
  strcat(A,B);
  cout<<A;
  return 0;
}
