#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main(){

  int n; cin>>n;
  int d[500005];
  int count[8001]={0};
  double sum=0;
  vector<int> result;

  for(int i=0; i<n; i++){
    cin>>d[i];
    sum+=d[i];
    count[d[i]+4000]++;
  }

  int max=-1;
  for(int i=0; i<=8000; i++){
    if(max<count[i]){
      max=count[i];
    }
  }

  for(int i=0; i<=8000; i++){
    if(max==count[i]){
        result.push_back(i-4000);
    }
  }
  sum = round(sum/n);
  if(sum == -0){
    sum = 0;
  }

  sort(d,d+n);

  cout<<sum<<"\n";
  cout<<(n==1 ? d[0] :d[(n-1)/2])<<"\n";
  cout<<(result.size()==1 ? result[0] : result[1])<<"\n";
  cout<<(d[n-1]-d[0]);

  return 0;
}