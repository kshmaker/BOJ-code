#include <iostream>
using namespace std;
int main(){
  int n; cin>>n;
  int d[6];
  int sum=0;
  for(int i=0; i<6; i++){
    cin>>d[i];
  }
  int t,p;
  cin >> t >> p;
  for(int i=0; i<6; i++){
    sum+=(d[i]/t + (d[i]%t!=0));
  }
  cout << sum << "\n";
  cout << n/p << " " << n%p <<"\n";
  return 0;
}