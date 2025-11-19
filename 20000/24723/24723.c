#include <stdio.h>
int main(){
  int n; scanf("%d",&n);
  int result=2;
  for(int i=1; i<n; i++){
    result*=2;
  }
  printf("%d",result);
}

// 파스칼 삼각형의 각 행의 총합을 구하는 문제