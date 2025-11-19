#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n,k; cin>>n>>k;
  int state=0;

  vector<int> v;

  for(int i=1; i<=n; i++){
    v.push_back(i);
  }
  cout<<"<";
  for(int i=n; i>1; i--){
    state+=k;
    state--;
    state%=i;
    cout<<v[state]<<", ";
    v.erase(v.begin()+state);
  }
  cout<<v.front()<<">";
  return 0;
}