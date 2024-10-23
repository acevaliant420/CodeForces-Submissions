#include <bits/stdc++.h>

using namespace std;

#define ll long long

int gcd(int a, int b) 
{ 
    // Everything divides 0 
    if (a == 0) 
        return b; 
    if (b == 0) 
        return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a - b, b); 
    return gcd(a, b - a); 
} 

bool check(ll int a[], ll int i, ll int n){
    if(i>=n){
        return false;
    }
    int diff = 0;
    ll int b[n-1];
    ll int new_[n-1];
    for(ll int j=0; j<n-1; j++)
    {
        if(j<i){
            new_[j] = a[j];
            continue;
        }
        new_[j] = a[j+1];
    }
    for(ll int i=0; i<n-1; i++)
    {
        b[i] = gcd(new_[i], new_[i+1]);
    }
    ll int k;
    for(k=0; k<n-2; k++)
    {
        if(b[k]>b[k+1])
        {
            diff++;
            break;
        }
    }
    if(diff == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll int n;
        cin>>n;
        ll int a[n];
        for(ll int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll int b[n-1];
        for(ll int i=0; i<n-1; i++)
        {
            b[i] = gcd(a[i], a[i+1]);
            cout<<b[i]<<" ";
        }
        cout<<endl;
        ll int i;
        for(i=0; i<n-2; i++)
        {
            if(b[i]>b[i+1])
            {
                break;
            }
        }
        if(check(a, i+1, n) || check(a, i+3, n) || check(a, i+2, n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}