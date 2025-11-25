#include <iostream>
using namespace std;
int main(){
  int d[10]={0};
  int a,b,c; cin>>a>>b>>c;
  int result = a*b*c;
  while(result!=0){
    d[result%10]++;
    result=result/10;
  }
  for(int i=0;i<10; i++) cout<<d[i]<<"\n";
  return 0;
}