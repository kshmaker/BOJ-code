#include <iostream>
#include <deque>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cout.tie(NULL);
  cin.tie(NULL);

  int n; cin>>n;
  deque<pair<int,int>> dq;
  int num;

  for(int i=1; i<=n; i++){
    cin>>num;
    dq.push_back({i,num});
  }
  
  while(dq.size()!=1){
    pair<int,int> p= dq.front();
    num=p.second;
    if(num>0){
      num--;
      dq.pop_front();
      while(num--){
        dq.push_back(dq.front());
        dq.pop_front();
      }    
    }
    else{
      num=-num;
      dq.pop_front();
      while(num--){
        dq.push_front(dq.back());
        dq.pop_back();
      }
    }
    cout<<p.first<<" ";
  }
  cout<<dq.front().first;

  return 0;
}