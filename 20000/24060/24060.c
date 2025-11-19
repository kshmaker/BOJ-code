#include <stdio.h>
int d[500005]={0};
int temp[500005]={0};
int cnt=0;
int k;
void merge(int p, int q, int r){
  int i=p, j=q+1, t=1;
  while(i<=q && j<=r){
    if(d[i]<=d[j]) temp[t++]=d[i++];
    else temp[t++]=d[j++];
  }
  while(i<=q) temp[t++]=d[i++];
  while(j<=r) temp[t++]=d[j++];
  i=p, t=1;
  while(i<=r){
    d[i++]=temp[t++];
    cnt++;
    if(cnt==k) printf("%d",d[i-1]);
  }
  return;
}

void merge_sort(int p, int r){
  if(p<r){
    int q=(p+r)/2;
    merge_sort(p,q);
    merge_sort(q+1,r);
    merge(p,q,r);
    return;
  }
  return;
}
int main(){

  int n; scanf("%d %d",&n,&k);
  
  for(int i=1; i<=n; i++){
    scanf("%d",&d[i]);
  }
  merge_sort(1,n);
  if(cnt<k) printf("-1");

  return 0;

}