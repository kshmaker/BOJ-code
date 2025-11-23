#include <iostream>
#include <queue>
using namespace std;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n; cin>>n;
  string input;
  queue<int> q;
  int num;
  cin.ignore();
  for(int i=0; i<n;i++){
    cin>>input;
    if(input=="push"){
      cin>>num;
      q.push(num);
    }
    else if(input=="pop"){
    	if(q.empty()){
        cout<<"-1\n";
        continue;
      }
      cout<<q.front()<<"\n";
      q.pop();
    }
    else if(input=="size"){
      cout<<q.size()<<"\n";
    }
    else if(input=="empty"){
      cout<<q.empty()<<"\n";
    }
    else if(input=="front"){
      if(q.empty()){
        cout<<"-1\n";
        continue;
      }
      cout<<q.front()<<"\n";
    }
    else if(input=="back"){
      if(q.empty()){
        cout<<"-1\n";
        continue;
      }
      cout<<q.back()<<"\n";
    }

  }
  return 0;
}