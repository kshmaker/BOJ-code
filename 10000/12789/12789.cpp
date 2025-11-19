#include <iostream>
#include <stack>

using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin>>n;

  stack<int> st;
  
  int input;
  int input_state=1;
  int i=0; 
  while(input_state<=n){
    cin>>input;
    if(input_state == input)input_state++;
    else st.push(input);

    while(!st.empty() && st.top()==input_state){
      st.pop();
      input_state++;
    }
  }

  cout<<(st.empty() ? "Nice" : "Sad");

  return 0;
}