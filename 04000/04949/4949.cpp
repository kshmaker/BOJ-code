#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  while(1){
    bool state=1;
    string str;
    getline(cin,str);
    
    if(str==".") break;
    vector<char> v;

    for(int i=0; i< str.length(); i++){
    	
    	if(str[i] == '(' || str[i] == '[') v.push_back(str[i]);
    	else if(str[i] == ')'){
    		if(!v.empty() && v.back() == '(') v.pop_back();
    		else{
    			state = 0; break;
    		}
    	}
    	else if(str[i] == ']'){
    		if(!v.empty() && v.back() == '[') v.pop_back();
    		else{
    			state = 0; break;
    		}
    	}
    }
    if(state == 1 && v.empty()) cout<<"yes\n";
    else cout<<"no\n";
  }
  return 0; 
}