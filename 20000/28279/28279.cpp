#include <iostream>
#include <deque>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(NULL);
  cin.tie(NULL);

  int n; cin>>n;
  int com, num;

  deque<int> dq;
  for(int i=0; i<n; i++){
    cin>>com;
    if(com==1){
      cin>>num;
      dq.push_front(num);
    }
    else if(com==2){
      cin>>num;
      dq.push_back(num);
    }
    else if(com==3){
      if(dq.empty()) cout<<"-1\n";
      else{
        cout<<dq.front()<<"\n";
        dq.pop_front();
      }
    }
    else if(com==4){
      if(dq.empty()) cout<<"-1\n";
      else{
        cout<<dq.back()<<"\n";
        dq.pop_back();
      }
    }
    else if(com==5){
      cout<<dq.size()<<"\n";
    }
    else if(com==6){
      cout<< dq.empty()<<"\n";
    }
    else if(com==7){
      if(dq.empty()) cout<<"-1\n";
      else{
        cout<<dq.front()<<"\n";
      }
    }
    else if(com==8){
      if(dq.empty()) cout<<"-1\n";
      else{
        cout<<dq.back()<<"\n";
      }
    }
  }
  return 0;
}