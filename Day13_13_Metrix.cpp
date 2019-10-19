#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  int A[2][2] = {{1,2},{2,7}};
  int B[2][2] = {{-3,5},{6,-2}};
  
  for(int i = 0;i<2;i++){
    for(int j =0;j<2;j++){
      cout<<A[i][j]+B[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
