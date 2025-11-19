#include <iostream>
#include <vector>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  vector<char> v;
  int t; cin>>t;
  cin.ignore();
  string input;

  for(int i=0; i<t; i++){
    int state=1;
    cin >> input;
    for(int j=0; j<input.length(); j++){
      if(input[j]=='('){
        v.push_back(input[j]);
      }
      else{
        if(v.empty()){
          state=0; break;
        }
        else{
          v.pop_back();
        }
      }
    }
    if(!v.empty()) state=0;
    cout<<(state?"YES\n":"NO\n");
    v.clear();
  }

  return 0;
}