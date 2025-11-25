#include <iostream>

#define MAX 5
using namespace std;

int Arr[MAX];
bool Select[MAX];

void Print(){
  for(int i=0; i< MAX; i++){
    if(Select[i]==true){
      cout << Arr[i] <<" "; // 선택된 요소들만 출력
    }
  }
  cout << endl;
}

void DFS(int Idx, int Cnt){
  if(Cnt == 3){ //총 Select 배열에서 True가 3개가 되면 출력
    Print();
    return;
  }

  for(int i=Idx; i<MAX; i++){
    if(Select[i] == true) continue;
    Select[i] = true;
    DFS(i,Cnt+1);
    Select[i] = false;
  }
}

int main(){
  for(int i=0; i<MAX; i++){
    Arr[i] = i+1;
  }
  DFS(0,0);
}