//bishen//
#include <bits/stdc++.h> 
using namespace std; 

void multiply(string s1, string s2){
    
    int l1 = s1.length();
    int l2 = s2.length();
    
    vector<int> vec(l1+l2+1);
    
    int r1,r;
     r1 = r = l1+l2; 
     
     
    for(int i=l2-1;i>=0;i--){
        r  = r1;
        int carry = 0;
        int d2 = s2[i]-'0';
        //cout << d2 << " ";
        for(int j=l1-1;j>=0;j--){
            int d1 = s1[j]-'0';
           // cout << d1 << " ";
            d1*=d2;
            d1+=vec[r];
            d1+=carry;
            if(j==0){
                while(d1){
                    vec[r--] = d1%10;
                    d1=d1/10;
                }
            }else{
               vec[r--] = d1%10;
               carry = d1/10;
            }
        }
    //   int f = 1;
    //   for(int l=0;l<l1+l2+1;l++){
    //   if(vec[l]==0&&f)continue;
    //   cout << vec[l];f=0;
    //  }
     //cout << endl;
     r1--;
    }
      int f = 1;   
    for(auto x:vec){
        if(x==0&&f)continue;
       cout << x;f=0;
    }
    if(f==1) cout << 0;
    
}


int main(){ 
string s1,s2; cin>>s1>>s2;
//cout << s1 <<endl << s2 << endl;
multiply(s1,s2);
return 0; 

}
