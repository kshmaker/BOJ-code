#include <iostream>
#include <map>
using namespace std;
int main(){
  int n; cin>>n;
  cin.ignore();
  string input;
  int sum=0;
  map<string,int> m;
  for(int i=0; i<n; i++){
    cin>>input;
    if(input=="ENTER") {
      sum+=m.size();
      m.clear();
      continue;
    }
    m.insert({input,1});
  }
  sum+=m.size();
  cout<<sum;
  return 0;
}