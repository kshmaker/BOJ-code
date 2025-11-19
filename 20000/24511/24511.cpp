#include <iostream>
#include <deque>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  deque<int> dq;

  int n; cin>>n;
  int A[100005];
  int B[100005];
  int C[100005];
  for(int i=1; i<=n; i++){
    cin>>A[i];
  }
  for(int i=1; i<=n; i++){
    cin>>B[i];
    if(A[i]==0) dq.push_back(B[i]);
  }

  int m; cin>>m;
  for(int i=1; i<=m; i++){
    cin>>C[i];
    dq.push_front(C[i]);
    cout<<dq.back()<<" ";
    dq.pop_back();
  }
  return 0;
}