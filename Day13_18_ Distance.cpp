#include <stdio.h>
#include <math.h>

int main(){
  struct coor{
    int x;
    int y;
  } P,Q;
  scanf("%d %d",&P.x,&P.y);
  scanf("%d %d",&Q.x,&Q.y);
  double dis;
  dis = sqrt(pow(Q.x-P.x,2)+pow(Q.y-P.y,2));
  printf("%.2lf",dis);
}
