#include <iostream>
using namespace std;

int cnt=0;

void hanoi(int n, int start, int to, int end){
  if(n==1) {
    printf("%d %d\n",start,end);
    cnt++;
    return;
  }
  else{
    hanoi(n-1,start,end,to);
    cout<< start<<" "<< end <<"\n";
    hanoi(n-1,to,start,end);
  }
}

int main(){
  int n; cin>>n;
  int cnt=1;
  for(int i=0; i<n; i++){
    cnt*=2;
  }
  cnt--;
  cout<<cnt<<"\n";
  hanoi(n,1,2,3);
  return 0;
}