#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    ll int t;
    cin>>t;
    while (t--){
       ll int n;
       cin>>n;
       ll int a[n];
        for (ll int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll int all[n-1];
        for(ll int i=0; i<n-1; i++){
            ll int temp1 =abs(a[i]-a[i+1]);
            ll int temp2 =a[i]+a[i+1];
            all[i]=temp1+temp2;
        } 
        ll int mini=INT64_MAX;
        ll int index;
        for(ll int i=0; i<n-1; i++){
            if(all[i]<mini){
                mini=all[i];
                index=i;
            }
        }
        cout<<max(a[index], a[index+1])-1<<endl;
    }
    
    return 0;
}