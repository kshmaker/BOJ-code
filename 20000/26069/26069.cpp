#include <iostream>
#include <map>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(NULL);
  cin.tie(NULL);

  map<string,int> m;
  m.insert({"ChongChong",1});
  int n; cin>>n;
  string input1;
  string input2;
  for(int i=0; i<n; i++){
    cin>>input1>>input2;
    if(m.find(input1)!= m.end() || m.find(input2)!=m.end()){
      m.insert({input1,1});
      m.insert({input2,1});
    }
  }
  cout<<m.size();
  return 0;
}
