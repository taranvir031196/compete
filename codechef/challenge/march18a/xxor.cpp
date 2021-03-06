#pragma comment (linker, "/stack:20000000")
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;

#define bye return 0
#define pb push_back
#define mp make_pair
#define mod(n) (n) % 1000000007
#define e_val 2.718281828
#define stp(a,b) a.push(b)
#define all(a) a.begin(),a.end()
#define PI 3.1415926535897932384626433832795
#define rep(i,n) for( int i = 0; i < n; i++ )
#define endl '\n'

typedef long long int lli;
typedef long long ll;
typedef unsigned long long int ulli;
typedef unsigned long long ull;
typedef pair<lli,lli> plli;
typedef vector<lli> vlli;
typedef map<string,lli> mslli;
typedef map<lli,lli> mlli;
typedef unordered_map<lli,lli> umlli;
typedef vector<pair<lli,lli> > vplli;

inline vector<string> split(string str,string sep){char* cstr=const_cast<char*>(str.c_str());char* current;vector<string> arr;current=strtok(cstr,sep.c_str());while(current!=NULL){arr.push_back(current);current=strtok(NULL,sep.c_str());}return arr;}
inline bool isPrime(lli n){if (n <= 1){return false;}if (n <= 3)  {return true;}if (n%2 == 0 || n%3 == 0) {return false;}for (int i=5; i*i<=n; i=i+6){if (n%i == 0 || n%(i+2) == 0){return false;}}return true;}
inline lli power(lli x,lli y,lli p){int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y = y>>1;x = (x*x) % p;}return res;}

lli t,n,a,b,c,d,e,f,x,y;
const lli MAXN = 1e5+5;
vlli v(MAXN);
int dp[MAXN][32];
int num[MAXN][32];

inline void debug(){
	rep(i,n){
		rep(j,32){
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	rep(i,n){
		rep(j,32){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin>>n>>t;
	rep(i,n){
		rep(j,32){
			num[i][j] = 0;
			dp[i][j] = 0;
		}
	}
	rep(i,n){
		cin>>v[i];
	}
	rep(i,n){
		rep(j,32){
			if(v[i]&(1<<j)){
				num[i][j] = 1;
				if(i > 0){
					dp[i][j] = dp[i-1][j]+1;
				}
				else{
					dp[i][j]++;
				}
			}
			else{
				if(i > 0){
					dp[i][j] = dp[i-1][j];
				}
			}
		}
	}
	// debug();
	while(t--){
		cin>>x>>y;
		d = ceil(static_cast<double>(y-x+1)/2.0);
		x--,y--;
		bitset<31> bit(2147483647);
		rep(i,31){
			c = (dp[y][i] - dp[x][i] + num[x][i]);
			if(c >= d){
				bit[i] = 0;
			}
			else{
				bit[i] = 1;
			}
		}
		cout<<bit.to_ulong()<<endql;
	}
	bye;
}

