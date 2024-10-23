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

ll int removeDuplicates(ll int *arr, ll int n) 
{ 
    if (n==0 || n==1) 
        return n; 
  
    ll int j = 0; 
  
    for (ll int i = 0; i < n - 1; i++) 
        if (arr[i] != arr[i + 1]) 
            arr[j++] = arr[i]; 
  
    arr[j++] = arr[n - 1]; 
  
    return j; 
} 

void solve(){
	ll int n, m;
	cin>>n>>m;
	ll int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a, a+n);
	unordered_map<ll int, ll int> mp;
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	ll int temp = removeDuplicates(a, n);
	ll int ans=0;
	ll int real_ans = 0;
	for(int i=0; i<temp; i++){
		ll int niq = mp[a[i]] * a[i];
		if(niq<=m){
			ans = max(ans, niq);
		}
		else{
			ll int token = m/a[i];
			ans = max(ans, token*a[i]);
		}
	}
	for(int i=0;i<temp-1;i++){
		ll int check = 0;
		if(a[i+1]-a[i]==1){
			ll int wut = m/a[i];
			if(wut==0){
				continue;
			}
			if(wut<=mp[a[i]]){
				check = wut*a[i];
				ll int wut2 = m - check;
				if(wut2<=mp[a[i]]){
					if(wut2<=mp[a[i+1]]){
						check += wut2;
					}
					else{
						check += mp[a[i+1]];
					}
				}
				else{
					if(mp[a[i]]<=mp[a[i+1]]){
						check += mp[a[i]];
					}
					else{
						check += mp[a[i+1]];
					}
				}
				
			}
			else{
				check = (mp[a[i]])*a[i];
				ll int wut2 = m - check;
				ll int wut3 = wut2/(a[i+1]);
				if(wut3<=mp[a[i+1]]){
					check = check + wut3*a[i+1];
					ll int wut4 = m - check;
					if(wut4<=mp[a[i]]){
						if(wut4<=(mp[a[i+1]]-wut3)){
							check = check + wut4;
						}
						else{
							check = check + mp[a[i+1]]-wut3;
						}
					}
					else{
						if(mp[a[i]]<=(mp[a[i+1]]-wut3)){
							check = check + mp[a[i]];
						}
						else{
							check = check + mp[a[i+1]]-wut3;
						}
					}
					
				}
				else{
					check = check + mp[a[i+1]]*a[i+1];
				}
			}
			
		}
		ans = max(ans, check);
		
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