#include <bits/stdc++.h>
using namespace std;

 ll fibonacci(ll n){
     vll dp(n+1,0);
     dp[0] = 0;
     dp[1] = 1;
     for(ll i=2;i<=n;i++){
         dp[i] = dp[i-1] + dp[i-2];
     }
     return dp[n];
 }

void solve(){
    ll n;cin>>n;
    cout << fibonacci(n);
    
}

int main(){
    int T;//cin>>T;
     T = 1;
    while(T--){
        solve();
        if(T)cout << endl;
    }

    return 0;
}
