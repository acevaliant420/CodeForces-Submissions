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
	int l, r;
	cin>>l>>r;
	vector<int> v;
	for(int i=l; i<=r; i++){
		v.push_back(i);
	}
	int ans = 0;
	int num = 0;
	bool check = false;

	for(auto i:v){
		for(auto j:v){
			
			if(check == false){
				for(auto k:v){
					if(gcd(v[i], v[j])==1 && gcd(v[j], v[k])==1 && gcd(v[i], v[k])==1){
						ans++;
						v.erase(v.begin()+k);
						v.erase(v.begin()+j);
						v.erase(v.begin()+i);
						if(v.size()<3){
							check = true;
							break;
						}
						i = 1;
						j = 1;
						k = 1; 

					}
				}
			}
			
		}
		if(check){
			break;
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