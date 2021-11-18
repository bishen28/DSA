#include <bits/stdc++.h>
using namespace std;


 
 
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> A(n,0);
    
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    vector<int> dp(k+1,0);
    dp[0] = 0;
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i>=A[j]){
               if(dp[i-A[j]]==0) dp[i] = 1; 
            }
        }
    }
    if(dp[k]==1) cout << "First";
    else cout << "Second";
}




int main(){
    int T;
    T = 1;
    while(T--){
        solve();
        if(T)cout << endl;
    }

    return 0;
}
