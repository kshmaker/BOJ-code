#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  string input;
  for(int i=0; i<n; i++){
    cin>>input;
    int state=0;
    int sum=0;
    for(int i=0; i<input.length(); i++){
      if(input[i]=='O'){
        state++;
        sum+=state;
      }
      else{
        state=0;
      }
    }
    cout<<sum<<"\n";
  }
  return 0;
}