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


void solve(){
   int n, k;
   cin>>n>>k;  
   ll int a[n];
    f(i,0,n){
        cin>>a[i];
    }
    sort(a,a+n);
    map<ll int,ll int> m;
    f(i,0,n){
        m[a[i]]++;
    }
    vector<pair<ll int,ll int>> v;
    for(auto i:m){
        v.push_back({i.first,i.second});
    }
    ll int ans=0;
    sort(v.begin(),v.end());
    vector<ll int> prefix(v.size(),0);
    prefix[0]=v[0].second;
    f(i,1,v.size()){
        prefix[i]=prefix[i-1]+v[i].second;
    }
    for(int i=0;i<v.size();i++){
        ll int sum=0;
        int j;
        for(j=i+1; j<i+k && j<v.size();j++){
            if(v[j].first-v[j-1].first!=1){
                break;
            }
        }
        if(j==i+1){
            sum=v[i].second;
        }
        else{
            sum=prefix[j-1]-(i==0?0:prefix[i-1]);
        }
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
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