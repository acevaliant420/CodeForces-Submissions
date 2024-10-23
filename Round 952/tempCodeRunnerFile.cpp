#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--){
       int n;
       cin>>n;
       int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int all[n-1];
        for(int i=0; i<n-1; i++){
            int temp1 =abs(a[i]-a[i+1]);
            int temp2 =a[i]+a[i+1];
            all[i]=temp1+temp2;
        } 
        int mini=INT16_MAX;
        int index;
        for(int i=0; i<n-1; i++){
            if(all[i]<mini){
                mini=a[i];
                index=i;
            }
        }
        cout<<max(a[index], a[index+1])-1<<endl;
    }
    
    return 0;
}