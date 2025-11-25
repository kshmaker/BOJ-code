#include <stdio.h>
int main(){
  int n; scanf("%d",&n);
  int a,b; scanf("%d %d",&a,&b);
  int result = (n>(a/2+b)) ? a/2+b : n;
  printf("%d",result);

  return 0;
}