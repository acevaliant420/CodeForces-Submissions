#include <bits/stdc++.h> 
using namespace std; 

#define ll long long

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n, f, k;
        cin>>n>>f>>k;
        int arr[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int fav = arr[f-1];
        sort(arr, arr + n, greater<int>());
        int temp = INT16_MAX;
        int max = INT16_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==fav){
                if(i<temp){
                    temp = i;
                }
                if(i>max){
                    max = i;
                }
            }
        }
        temp++;
        max++;
        if(temp>k)
        {
            cout<<"NO"<<endl;
        }
        else if(temp<=k && max>k)
        {
            cout<<"MAYBE"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}