#include <stdio.h>
int main(){
  int sum=0;
  int d[5];
  for(int i=0; i<5; i++){
    scanf("%d",&d[i]);
  }
  for(int i=0; i<5; i++){
    sum+=d[i]*d[i];
  }

  printf("%d",sum%10);

  return 0;
}