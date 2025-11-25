#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(NULL);
  cin.tie(NULL);

  int n;cin>>n;
  int m;
  int num;
  vector<int> v;
  for(int i=0; i<n; i++){
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(),v.end());

  cin>>m;
  for(int i=0; i<m; i++){
    cin>>num;
    cout<<binary_search(v.begin(),v.end(),num)<<"\n";
  }
  return 0;
}