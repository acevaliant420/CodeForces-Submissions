#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        ll int n, m;
        cin>>n>>m;
        if(m==0){
            cout<<n<<endl;
            continue;
        }
        ll int z = pow(n, 2) -1;
        ll int arr[z];
        for(ll int i=0; i<z; i++){
            arr[i] = i;
        }
        ll int newarr[z];
        while(m--){
            for(ll int i=0; i<z; i++){
                if(i==0){
                    newarr[i] = arr[i] | arr[i+1];
                }
                else{
                    newarr[i] = arr[i] | arr[i-1] | arr[i+1];
                }
            }
            for(ll int i=0; i<z; i++){
                arr[i] = newarr[i];
                cout<<"i"<<i<<"="<<arr[i]<<endl;
            }
        }
        
    }
    return 0;
}