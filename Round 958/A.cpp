#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    ll int t;
    cin>>t;
    while (t--){
       int n, k;
       cin>>n>>k;
       ll int ans=0;
       if(n==1){
        ans = 0;
       }
       else if(n<k){
        ans = n;
       }
       else{
        ans++;
        int temp = n/k;
        int y = n - (temp*k);
        ans += temp;
        while(y!=0){
            n = y;
            temp = n/k;
            y = n - (temp*k);
            ans += temp;
            if(y<=k){
                ans += y;
                break;
            }
        }
       }
       cout<<ans<<endl;
    }
    
    return 0;
}