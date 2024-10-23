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

ll int log_a_to_base_b(ll int a, ll int b)
{
    return log2(a) / log2(b);
}


int main()
{

	int tc;
	cin>>tc;
    ll int a[40000];
    ll int b[40000];
    ll int c[40000];
    ll int d[40000];
    ll int e[40000];
    for(ll int i=0; i<40000; i++){
        ll int temp = log_a_to_base_b(i+1, 3);
        a[i] = temp+1;
    }
    for(ll int i=0; i<40000; i++){
        ll int temp = log_a_to_base_b(i+1+40000, 3);
        b[i] = temp+1;
    }
    for(ll int i=0; i<40000; i++){
        ll int temp = log_a_to_base_b(i+1+80000, 3);
        c[i] = temp+1;
    }
    for(ll int i=0; i<40000; i++){
        ll int temp = log_a_to_base_b(i+1+120000, 3);
        d[i] = temp+1;
    }
    for(ll int i=0; i<40000; i++){
        ll int temp = log_a_to_base_b(i+1+160000, 3);
        e[i] = temp+1;
    }
    
	while(tc--){
		int l, r;
        cin>>l>>r;
        ll int arr[r-l+1];
        ll int n = r-l+1;
        for(int i=0; i<n; i++){
            arr[i] = l+i;
        }
        if(l<3){
            ll int ans = 0;
            if(l==1){
                arr[1] = 0;
                arr[0] = 3;
                ans++;
                for(int i=0; i<n; i++){
                if(arr[i]/3 !=0){
                        if(arr[i]<=40000){
                            ans += a[arr[i]-1];
                        }
                        else if(arr[i]<=80000){
                            ans += b[arr[i]-40000-1];
                        }
                        else if(arr[i]<=120000){
                            ans += c[arr[i]-80000-1];
                        }
                        else if(arr[i]<=160000){
                            ans += d[arr[i]-120000-1];
                        }
                        else if(arr[i]<=200000){
                            ans += e[arr[i]-160000-1];
                        }
                        else if(arr[i]<=1594323){
                            ans += 14;
                        }
                        else if(arr[i]<=4782969){
                            ans += 15;
                        }
                        else if(arr[i]<=14348907){
                            ans += 16;
                        }
                        else if(arr[i]<=43046721){
                            ans += 17;
                        }
                        else if(arr[i]<=129140163){
                            ans += 18;
                        }
                        else if(arr[i]<=387420489){
                            ans += 19;
                        }
                        else if(arr[i]<=1162261467){
                            ans += 20;
                        }
                        else if(arr[i]<=3486784401){
                            ans += 21;
                        }
                        else if(arr[i]<=10460353203){
                            ans += 22;
                        }
                        else if(arr[i]<=31381059609){
                            ans += 23;
                        }
                        else if(arr[i]<=94143178827){
                            ans += 24;
                        }
                        else if(arr[i]<=282429536481){
                            ans += 25;
                        }
                        else if(arr[i]<=847288609443){
                            ans += 26;
                        }
                        else if(arr[i]<=2541865828329){
                            ans += 27;
                        }
                        else if(arr[i]<=7625597484987){
                            ans += 28;
                        }
                        else if(arr[i]<=22876792){
                            ans += 29;
                        }
                        else if(arr[i]<=68630377364883){
                            ans += 30;
                        }
                        else if(arr[i]<=205891132094649){
                            ans += 31;
                        }
                        else if(arr[i]<=617673396283947){
                            ans += 32;
                        }
                        else if(arr[i]<=1853020188851841){
                            ans += 33;
                        }
                        else if(arr[i]<=5559060566555523){
                            ans += 34;
                        }
                        else if(arr[i]<=16677181699666569){
                            ans += 35;
                        }
                        

                    }
                }
            }
            else{
                arr[0] = 0;
                arr[1] = arr[1]*3;
                ans++;
                for(int i=0; i<n; i++){
                if(arr[i]/3 !=0){
                        if(arr[i]<=40000){
                            ans += a[arr[i]-1];
                        }
                        else if(arr[i]<=80000){
                            ans += b[arr[i]-40000-1];
                        }
                        else if(arr[i]<=120000){
                            ans += c[arr[i]-80000-1];
                        }
                        else if(arr[i]<=160000){
                            ans += d[arr[i]-120000-1];
                        }
                        else if(arr[i]<=200000){
                            ans += e[arr[i]-160000-1];
                        }
                        else if(arr[i]<=1594323){
                            ans += 14;
                        }
                        else if(arr[i]<=4782969){
                            ans += 15;
                        }
                        else if(arr[i]<=14348907){
                            ans += 16;
                        }
                        else if(arr[i]<=43046721){
                            ans += 17;
                        }
                        else if(arr[i]<=129140163){
                            ans += 18;
                        }
                        else if(arr[i]<=387420489){
                            ans += 19;
                        }
                        else if(arr[i]<=1162261467){
                            ans += 20;
                        }
                        else if(arr[i]<=3486784401){
                            ans += 21;
                        }
                        else if(arr[i]<=10460353203){
                            ans += 22;
                        }
                        else if(arr[i]<=31381059609){
                            ans += 23;
                        }
                        else if(arr[i]<=94143178827){
                            ans += 24;
                        }
                        else if(arr[i]<=282429536481){
                            ans += 25;
                        }
                        else if(arr[i]<=847288609443){
                            ans += 26;
                        }
                        else if(arr[i]<=2541865828329){
                            ans += 27;
                        }
                        else if(arr[i]<=7625597484987){
                            ans += 28;
                        }
                        else if(arr[i]<=22876792){
                            ans += 29;
                        }
                        else if(arr[i]<=68630377364883){
                            ans += 30;
                        }
                        else if(arr[i]<=205891132094649){
                            ans += 31;
                        }
                        else if(arr[i]<=617673396283947){
                            ans += 32;
                        }
                        else if(arr[i]<=1853020188851841){
                            ans += 33;
                        }
                        else if(arr[i]<=5559060566555523){
                            ans += 34;
                        }
                        else if(arr[i]<=16677181699666569){
                            ans += 35;
                        }
                    }
                }
            }
            cout<<ans<<endl;
        }
        else{
            ll int ans = 0;
            ll int i = 1;
            ll int temp = log_a_to_base_b(arr[0], 3);
            ans += temp + 1;
            cout<<ans<<endl;
            arr[0] = 0;
            for(int j=0; j<=temp; j++){
                arr[i] = arr[i]*3;
                i++;
                if(i==n){
                    i=1;
                }
            }
            for(int i=0; i<n; i++){
                if(arr[i]/3 !=0){
                    if(arr[i]<=40000){
                            ans += a[arr[i]-1];
                        }
                        else if(arr[i]<=80000){
                            ans += b[arr[i]-40000-1];
                        }
                        else if(arr[i]<=120000){
                            ans += c[arr[i]-80000-1];
                        }
                        else if(arr[i]<=160000){
                            ans += d[arr[i]-120000-1];
                        }
                        else if(arr[i]<=200000){
                            ans += e[arr[i]-160000-1];
                        }
                        else if(arr[i]<=1594323){
                            ans += 14;
                        }
                        else if(arr[i]<=4782969){
                            ans += 15;
                        }
                        else if(arr[i]<=14348907){
                            ans += 16;
                        }
                        else if(arr[i]<=43046721){
                            ans += 17;
                        }
                        else if(arr[i]<=129140163){
                            ans += 18;
                        }
                        else if(arr[i]<=387420489){
                            ans += 19;
                        }
                        else if(arr[i]<=1162261467){
                            ans += 20;
                        }
                        else if(arr[i]<=3486784401){
                            ans += 21;
                        }
                        else if(arr[i]<=10460353203){
                            ans += 22;
                        }
                        else if(arr[i]<=31381059609){
                            ans += 23;
                        }
                        else if(arr[i]<=94143178827){
                            ans += 24;
                        }
                        else if(arr[i]<=282429536481){
                            ans += 25;
                        }
                        else if(arr[i]<=847288609443){
                            ans += 26;
                        }
                        else if(arr[i]<=2541865828329){
                            ans += 27;
                        }
                        else if(arr[i]<=7625597484987){
                            ans += 28;
                        }
                        else if(arr[i]<=22876792){
                            ans += 29;
                        }
                        else if(arr[i]<=68630377364883){
                            ans += 30;
                        }
                        else if(arr[i]<=205891132094649){
                            ans += 31;
                        }
                        else if(arr[i]<=617673396283947){
                            ans += 32;
                        }
                        else if(arr[i]<=1853020188851841){
                            ans += 33;
                        }
                        else if(arr[i]<=5559060566555523){
                            ans += 34;
                        }
                        else if(arr[i]<=16677181699666569){
                            ans += 35;
                        }
                }
            }
            cout<<ans<<endl;
        }
	}
	return 0;
}