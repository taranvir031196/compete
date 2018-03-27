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
// inline bool isPrime(lli n){if (n <= 1){return false;}if (n <= 3)  {return true;}if (n%2 == 0 || n%3 == 0) {return false;}for (int i=5; i*i<=n; i=i+6){if (n%i == 0 || n%(i+2) == 0){return false;}}return true;}
inline lli power(lli x,lli y,lli p){int res=1;x=x%p;while(y>0){if(y&1)res=(res*x)%p;y = y>>1;x = (x*x) % p;}return res;}


const lli MAXN = 1000001;
vlli isprime(MAXN , true);
vlli prime;
vlli SPF(MAXN);

void manipulated_seive(int N){
    isprime[0] = isprime[1] = false ;
    for (lli i=2; i< N ; i++){
        if (isprime[i]){
            prime.push_back(i);
            SPF[i] = i;
        }
        for (lli j=0;j < (int)prime.size() &&i*prime[j] < N && prime[j] <= SPF[i];j++){
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
vlli v(MAXN);
int main(){
	ios_base::sync_with_stdio(0);
	lli t,n,a,b,c,d,e,f,x,y;
	manipulated_seive(MAXN);
	fill(all(v),0);
	rep(i,prime.size()){
		v[prime[i]] = 1;
	}
	for (int i = 1; i < MAXN; ++i){
		v[i] = v[i]+v[i-1];
	}
	cin>>t;
	while(t--){
		cin>>x>>y;
		cout<<setprecision(6)<<fixed<<(static_cast<long double>(v[y]-v[x-1])/static_cast<long double>(y-x+1))<<endl;
	}
	bye;
}

