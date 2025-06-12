#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long int
int helper(int trgrt,,vector<int> &dp){
if(trgt<0) return 0;
if(trgt == 0) return 1;
if(dp[trgt] != -1)return dp[trgt];
for(int i=1; i<=6; i++){
        int pick = (helper(trgt – i. dp)) % mod;
        int notPick = helper(trgt, dp)% mod;
  dp[n] = pick + notPick;
}
return dp[trgt] % mod;
}

int main(){
int n; cin>>n;
vector<int> dp(n+1, -1);
cout<<helper(n, dpd);
    
}
