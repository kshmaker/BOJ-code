#include <iostream>
int d[31][31];

using namespace std;
int main(){
  int t; cin>>t;
  for(int i=0; i<30; i++){
    d[i][0]=d[i][i]=1;
  }
  for(int i=1; i<30; i++){
    for(int j=0; j<=i; j++){
      d[i][j] = d[i-1][j]+d[i-1][j-1];
    }
  }

  for(int i=0; i<t; i++){
    int n, m; cin>>n>>m;
    cout<<d[m][n]<<"\n";
  }  
  return 0;
}