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
	ll int n;
	cin>>n;
	vector<ll int> a(n);
	f(i,0,n){
		cin>>a[i];
	}
	ll int k;
	sort(a.begin(),a.end());
	vector<ll int> diff;
	for(int i=0; i<n-1; i+=2){
		ll int temp1 = abs(a[i]-a[i+1]);
		diff.push_back(temp1);
	}
	int index = 0;
	for(int i=1; i<diff.size(); i++){
		if(diff[index]<diff[i]){
			index = i;
		}
	}
	if(n==1){
		cout<<1<<endl;
		return;
	}
	if(n%2==0){
		sort(diff.begin(), diff.end());
		cout<<diff[diff.size()-1]<<endl;
	}
	else{
		ll int ans = INT64_MAX;
		for(int i=0; i<n; i++){
			vector<ll int> na(n);

			for(int j=0; j<n; j++){
				na[j] = a[j];
			}
			na.erase(na.begin()+i);
			ll int maxi = 1;
			for(int j=0; j<na.size()-1; j+=2){
				ll int temp = abs(na[j+1] - na[j]);
				if(temp>maxi){
					maxi = temp;
				}
			}
			if(maxi<ans){
				ans = maxi;
			}
		}
		cout<<ans<<endl;
	}
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