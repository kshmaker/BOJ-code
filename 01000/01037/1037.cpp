#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n; cin>>n;
  int d[52]={0};
  for(int i=0; i<n; i++){
    cin>>d[i];
  }
  sort(d,d+n);
  int result=d[0]*d[n-1];
  
  cout<<result;
  return 0;
}