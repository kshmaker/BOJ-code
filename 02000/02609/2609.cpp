#include <iostream>
using namespace std;

int gcd(int a, int b){
  if(a<b) {
    int temp = a;
    a=b;
    b=temp;
  }
  int r;
  while(b!=0){
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}
int main(){
  int a,b; cin>>a>>b;
  int GCD = gcd(a,b);
  cout<<GCD<<"\n"<< (a*b)/GCD;
  return 0;
}