int xy(int *x,int *y,int n)
{
  int sum = 0;
  for(int i=0;i<n;i++)
  {
    sum += x[i]*y[i];
  }
  return sum;
}
