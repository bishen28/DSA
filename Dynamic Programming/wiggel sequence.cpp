#include <bits/stdc++.h>
using namespace std;

 
 
void solve(){
    int n;cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> dpmx(n);
    vector<int> dpmn(n);
    
    dpmx[0] = 1;
    dpmn[0] = 1;
    
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            dpmx[i] = dpmn[i-1] + 1;
            dpmn[i] =  dpmn[i-1];
        }else{
            if(arr[i]<arr[i-1]){
                dpmn[i] = dpmx[i-1] + 1; 
                dpmx[i] =  dpmx[i-1];
             }else{
                dpmx[i] = dpmx[i-1];
                dpmn[i] = dpmn[i-1]; 
              }
            
        }
            
    
    }
    
    
 cout <<  max(dpmx[n-1],dpmn[n-1]);

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
