#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	vector<int> v;
	
	int n; cin>>n;
	int com;
	int x;
	for(int i=0; i<n; i++){
		cin>>com;
		if(com==1) {
			cin>>x;
			v.push_back(x);
		}
		else if(com==2){
			if(v.size()>0){
				cout<< v.back()<<"\n";
				v.pop_back();
			}
			else cout<<"-1\n";
		}
		else if(com==3){
			cout<<v.size()<<"\n";
		}
		else if(com==4){
			cout<<v.empty()<<"\n";
		}
		else if(com==5){
			if(v.empty()) cout<<"-1\n";
			else cout<<v.back()<<"\n";
		}
	}
	return 0;
}