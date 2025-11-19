#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

bool compare(pair<string,int> &a, pair<string,int> &b){
  if(a.second != b.second) return a.second > b.second;
  else if(a.first.length()!=b.first.length()) 
    return a.first.length()>b.first.length(); 
  else
    return a.first<b.first;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m; cin>>n>>m;
  string input;
  map <string,int> mp;
  
  for(int i=0; i<n; i++){
    cin>>input;
    if(input.size()>=m){
      mp[input]++;
    }
  }
  vector<pair<string,int>> v(mp.begin(), mp.end());
  sort(v.begin(), v.end(), compare);
  for(auto &pair :v){
    cout<<pair.first<<"\n";
  }
}