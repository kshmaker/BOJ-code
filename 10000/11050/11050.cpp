#include <iostream>
using namespace std;


int binomial(int n, int k){
  if(k==0) return 1;
  else if(n==k) return 1;
  else return binomial(n-1,k) + binomial(n-1,k-1);
}

int main(){
  int n,k; cin>>n>>k;
  printf("%d",binomial(n,k));
}