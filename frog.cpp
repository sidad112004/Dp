#include<bits/stdc++.h>
using namespace std;

int h(int n,vector<int>&height){
  if(n==0){
    return 0;
  }
  int first=h(n-1,height)+abs(height[n]-height[n-1]);
  int second=INT_MAX;
  if(n<1){
     second=h(n-2,height)+abs(height[n]-height[n-2]);
  }
  return min(first,second);
}
int main(){
    //we want to go that positon so we start from that position only
    int n;
    vector<int>height(n+1);
    h(n,height);
    
}