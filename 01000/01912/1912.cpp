#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int max_sum=0;
  int sum=0;
  int d[100005];
  for(int i=0; i<n; i++){
    sum=0;
    for(int j=i; j<n; j++){
      sum=(sum+d[i]>0 ? sum+d[i] : 0);
      max_sum
    }

  }
  return 0;
}