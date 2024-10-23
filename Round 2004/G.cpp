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

	vector<pair<int,int>> v;
	int count = n-1;
	int array[n+1][n+1];
	array[0][0] = 1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==j){
				array[i][j] = 1;
			}
			else{
				array[i][j] = 0;
			}
		}
	}
	int a = 1;
	for(int i=2; i<=n; i++){
		cout<<'?'<<" "<<a<<" "<<i<<endl;
		cout.flush();
		int x;
		cin>>x;
		if(x==i){
			if(array[a][x]==0){
				v.push_back({a,x});
				array[a][x] = 1;
				array[x][a] = 1;
				count--;
			}
		}
		if(x==a){
			if(array[x][i]==0){
				v.push_back({x,i});
				array[x][i] = 1;
				array[i][x] = 1;
				count--;
			}
		}
		else{
			if(array[a][x]==0){
				v.push_back({a,x});
				array[a][x] = 1;
				array[x][a] = 1;
				count--;
			}
			if(array[i][x]==0){
				v.push_back({i,x});
				array[i][x] = 1;
				array[x][i] = 1;
				count--;
			}
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			for(int k=j+1; j<=n; j++){
				if(array[i][j]== 1 && array[i][k]==1){
					array[j][k] = 1;
					array[k][j] = 1;
				}
				if(array[i][j]== 1 && array[j][k]==1){
					array[i][k] = 1;
					array[k][i] = 1;
				}
				if(array[i][k]== 1 && array[j][k]==1){
					array[i][j] = 1;
					array[j][i] = 1;
				}
			}
		}
	}
	while(count--){
		int a;
		int b;
		for(int i=1; i<=n; i++){
			int j;
			for(j=i+1; j<=n; j++){
				if(array[i][j]==0){
					a = i;
					b = j;
					break;
				}
			}
			if(j<=n){
				break;
			}
		}	
		cout<<'?'<<" "<<a<<" "<<b<<endl;
		cout.flush();
		int x;
		cin>>x;
		if(x==b){
			v.push_back({a,x});
			array[a][x] = 1;
			array[x][a] = 1;
			count--;
		}
		else if(x==a){
			v.push_back({b,x});
			array[x][b] = 1;
			array[b][x] = 1;
			count--;
		}
		else{
			if(array[a][x]==0){
				v.push_back({a,x});
				array[a][x] = 1;
				array[x][a] = 1;
				count--;
			}
			if(array[b][x]==0){
				v.push_back({b,x});
				array[b][x] = 1;
				array[x][b] = 1;
				count--;
			}
		}
	}
	cout<<"!";
	cout.flush();
	for(int i=0; i<v.size(); i++){
		cout<<" "<<v[i].first<<" "<<v[i].second;
		cout.flush();
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