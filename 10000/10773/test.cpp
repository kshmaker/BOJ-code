#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int k; cin>>k;
  int n;
  long long int sum=0;
  vector<int> v;
  
  for(int i=0; i<k; i++){
    cin >> n;
    if(n!=0) v.push_back(n);
    else v.pop_back();
  }
  cout << accumulate(v.begin(),v.end(),0);
  return 0;
}