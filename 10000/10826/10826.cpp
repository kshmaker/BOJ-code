#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    long long int d[10005]={0,1,};
    for(int i=2; i<=n; i++){
        d[i]=d[i-1]+d[i-2];
    }
    printf("%lld",d[n]);
}