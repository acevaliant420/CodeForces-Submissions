#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>


#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back


template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }


#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }


typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

#define MOD 1000000007

int isprime(int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1; 
}

void solve(){
	ll int n;
    cin>>n;
    ll int base = log2(n);
    vector<ll int> ans(n,1);
    vector<ll int> good;
    for(int i=base; i>1; i--){
        ll int temp = pow(2, i) - 1;
        good.push_back(temp);
        ans[--temp] = 0;
    }
    ll int a[n];
    ll int k = 0;
    int j=0;
    int g=2;
    int largest = n;
    if(n%2!=0){
        a[0] = 2;
        a[1] = 1;
        a[2] = 3;
        a[3] = 4;
        a[4] = 5;
        for(int i=5; i<n; i++){
            a[i] = i+1;
        }
    }
    else{
        int lar = pow(2, base);
        if(n==pow(2, base)){
            a[0] = 2;
            a[1] = 4;
            a[2] = 5;
            a[3] = 1;
            a[4] = 3;
            for(int i=5; i<n; i++){
                a[i] = i+1;
            }
        }
        else{
            int count = 1;
            for(int i=0; i<n-3; i++){
                if(i+1 == lar-1){
                    count++;
                }
                a[i] = count++;
            }
            a[n-3] = n;
            a[n-2] = n-1;
            a[n-1] = lar-1;

                
        }
        
    }
    


    for(int i=0; i<n; i++){
        if(i%2==0){
            k = k & a[i];
        }
        else{
            k = k | a[i];
        }
    }
    
    cout<<k<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{

	int tc;
	cin>>tc;

	while(tc--){
		solve();
	}
	return 0;
}