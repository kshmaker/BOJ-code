#include <iostream>
#include <cmath>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n; cin>>n;
    int cnt=0;
    int sum=0;
    while(1){
        if(pow(10,cnt)<=n && n<pow(10,cnt+1)) break;
        cnt++;
    }

    for(int i=0; i<cnt; i++){
        sum+=(9*pow(10,i))*(i+1);
    }
    sum+=(cnt+1)*(n-pow(10,cnt)+1);

    cout<<sum;
    return 0;
}