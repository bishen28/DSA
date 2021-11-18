#include <bits/stdc++.h>
using namespace std;


void solve(){
    
     string s1,s2;cin>>s1>>s2;
     int n1 = s1.length();
     int n2 = s2.length();
     vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
     
     for(int i=1;i<=n1;i++){
         for(int j=1;j<=n2;j++){
             // must be s1[i-1] and s2[j-1]
             // if you use s1[i] & s2[j] the algorithm will
             // fail here   "abc" "def"
             if(s1[i-1]==s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
             else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
         }
     }

  cout <<  dp[n1][n2]; 
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
