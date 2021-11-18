#include <bits/stdc++.h>
using namespace std;


 
void solve(){
    int n;cin>>n;
    int m = n;
    vector<vector<char>> vec(n, vector<char>(m,'0'));
    vector<vector<ll>> dp(n, vll(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    
    int f = 0;
    for(int j=m-1;j>=0;j--){
        if(vec[n-1][j]=='1'||f){
            dp[n-1][j] = 0;
            f = 1;
        }else{
            dp[n-1][j] = 1;
        }
    }
    f = 0;
    for(int i=n-1;i>=0;i--){
        if(vec[i][m-1]=='1'||f){
            dp[i][m-1] = 0;
            f = 1;
        }else{
            dp[i][m-1] = 1;
        }
    }
    
    for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            if(vec[i][j]=='0') dp[i][j] = dp[i+1][j] + dp[i][j+1];
            else dp[i][j] = 0;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << dp[i][j] << " ";
        }cout <<  endl;
    }
    cout << dp[0][0];
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
