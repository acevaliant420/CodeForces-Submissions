#include <bits/stdc++.h> 
using namespace std;

#define ll long long


int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll int n;
        cin>>n;
        ll int a[n];
        for(ll int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll int b[n];
        for(ll int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll int m;
        cin>>m;
        ll int d[m];
        for(ll int i=0; i<m; i++)
        {
            cin>>d[i];
        }
        unordered_map<ll int, ll int> mp;
        for(ll int i=0; i<n; i++)
        {
            mp[i] = b[i];
        }
        unordered_map<ll int, ll int> mp1;
        unordered_map<ll int, ll int> mp2;
        for(ll int i=0; i<m; i++)
        {
            if(mp1.find(d[i])==mp1.end()){
                mp1[d[i]] = 0;
                mp2[d[i]] = 0;
            }            
            mp1[d[i]]++;
            mp2[d[i]]++;
        }
        int not_found = 0;
        int ans = 0;
        int ran = 0;
        for(auto x:mp){
            if(a[x.first]==x.second){
                continue;
            }
            else{
                if(mp1.find(x.second)==mp1.end()){
                    not_found = 1;
                }
                else{
                    if(mp1[x.second]==0){
                        ran = 1;
                    }
                    else{
                        mp1[x.second]--;
                    }
                }
            }
        }
        if(mp1[d[m-1]]<mp2[d[m-1]]){
            ans=0;
        }
        else if(mp1[d[m-1]]==mp2[d[m-1]]){
            ans = 1;
            for(auto x:mp){
                if(x.second==d[m-1]){
                    ans=0;
                }
            }
        }
        if(ran==0 && ans == 0 && not_found==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}