#include<bits/stdc++.h>
using namespace std;
//memorization method in the dp
int fibo(int n,vector<int>&dp){
   if(n<=1){
    return n;
   }
   if(dp[n]!=-1){
    return dp[n];
   }
   return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}


int main(){
    int n=0;
    cin>>n;
    vector<int>dp(n+1,-1);
    int ans=fibo(n,dp);
    cout<<ans<<endl;

    //tablulation form of the fibo

    vector<int>d(n+1);
    d[0]=0;
    d[1]=1;
    for(int i=2;i<=n;i++){
        d[i]=d[i-1]+d[i-2];
    }
    cout<<d[n]<<endl;

    //remove space colmplexity

    int a=0;
    int prev1=1;
    int prev2=0;
    for(int i=2;i<n;i++){//for n the value is caluculated in the ans becasue ans is ahead but the one
        a=prev1+prev2;
        prev1=ans;
        prev2=prev1;
    }
    cout<<a<<endl;

}