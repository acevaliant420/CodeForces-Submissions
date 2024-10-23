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
	int n;
	cin>>n;
	vector<vector<int>> a(n, vector<int>(2));
	f(i,0,n){
		cin>>a[i][0]>>a[i][1];
	}

	map<int, int> x;
	map<int, int> y;
	map<int, vector<int>> z;

	vector<int> b(n);
	vector<int> c(n);
	for(int i=0; i<n; i++){
		x[a[i][0]]++;
		y[a[i][1]]++;
		z[a[i][0]].push_back(a[i][1]);
		b.push_back(a[i][0]);
		c.push_back(a[i][1]);
	}
	ll int ans = 0;
	for(auto i:x){
		if(i.second>1){
			ans += n - 2;
		}
	}

	for(int i=0; i<n; i++){
		if(z.find(a[i][0]+1)!=z.end() && z.find(a[i][0]+2)!=z.end()){
			int q = z[a[i][0]+1].size();
			int arr[q];
			for(int j=0; j<q; j++){
				arr[j] = z[a[i][0]+1][j];
			}
			int p = z[a[i][0]+2].size();
			int arr1[p];
			for(int j=0; j<p; j++){
				arr1[j] = z[a[i][0]+2][j];
			}
			for(int j=0; j<q; j++){
				for(int k=0; k<p; k++){
					if(arr[j]!=a[i][1] && arr1[k]==a[i][1]){
						ans++;
					}
				}
			}
			

		}
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