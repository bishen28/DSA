#include <bits/stdc++.h>
using namespace std;

 


string calculatebadR(int i,int j){
    string s = "";
    char a = i-0; 
    char b = j-0;
    char c = (i+1)-0;
    char d = j-0;
    s+=a;s+=" ";
    s+=b;s+=" ";
    s+=c;s+=" ";
    s+=d;
   return s; 
}
string calculatebadU(int i,int j){
    string s = "";
    char a = i-0; 
    char b = j-0;
    char c = i-0;
    char d = (j+1)-0;
    s+=a;s+=" ";
    s+=b;s+=" ";
    s+=c;s+=" ";
    s+=d;
   return s; 
}  
   
long numWays(long width, long height, vector<string> &bad){
    vector<vector<long>> dp(width+1,vector<long>(height+1,0));
    dp[width][height] = 1;
    
    for(long i=width-1;i>=0;i--){
        string s = "";
        char a,b,c,d;
        a =  i - 0;
        b =  height - 0;
        c = (i+1) - 0;
        d = height - 0;
        s+=a;s+=" ";
        s+=b;s+=" ";
        s+=c;s+=" ";
        s+=d;
        if(find(bad. begin(), bad. end(), s) != bad.end()){
            dp[i][height] = 0;
            break;
        }else{
            dp[i][height] = 1;
        }
    }
    
    for(long i=height-1;i>=0;i--){
        string s = "";
        char a,b,c,d;
        
        a =  width - 0;
        b =  i-0;
        c =  width - 0;
        d =  (i+1) - 0;
        
        s+=a;s+=" ";
        s+=b;s+=" ";
        s+=c;s+=" ";
        s+=d;
        if(find(bad. begin(), bad. end(), s) != bad.end()){
            dp[width][i] = 0;
            break;
        }else{
            dp[width][i] = 1;
        }
    }
    
     
     for(long i = width-1;i>=0;i--){
         
     for(long j = height-1;j>=0;j--){
             
             string R = calculatebadR(j,i);
             string U = calculatebadU(j,i);
            if(find(bad. begin(), bad. end(), R) != bad.end()){
                dp[i][j] += dp[i+1][j];
            }
            if(find(bad. begin(), bad. end(), U) != bad.end()){
                dp[i][j] += dp[i][j+1];
            }
             
         }
         
         
     }
  return dp[0][0];  
    
}
    
    




int main(){
   int h,w;cin>>h>>w;
   cout << h << " " << w << endl;
   vector<string> bad = {""};  //{"0 0 0 1","6 6 5 6"};
 
  long x =  numWays(h,w,bad);
  cout << x;
    
}
