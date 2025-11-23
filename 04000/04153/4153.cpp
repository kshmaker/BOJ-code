#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int d[3];
  while(1){
    cin >> d[0] >> d[1] >> d[2];
    if(d[0]==0 && d[1]==0 && d[2]==0){
      break;
    }

    sort(d,d+3);
    cout << ((d[2]*d[2]==d[1]*d[1]+d[0]*d[0])? "right\n" : "wrong\n" );
  }
  return 0;
}