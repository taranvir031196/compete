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
#define rrep(i,n) for(int i = n - 1 ; i >= 0 ; i--)
#define crep(i,a,b) for( int i = a; i <= b; i++ )
#define endl '\n'
#define fi first
#define se second

typedef long long int lli;
typedef long long ll;
typedef unsigned long long int ulli;
typedef pair<lli,lli> plli;
typedef vector<lli> vlli;
typedef map<string,lli> mslli;
typedef map<lli,lli> mlli;
typedef vector<pair<lli,lli> > vplli;

inline bool isPrime(lli n){
	if (n <= 1)  {
		return false;
	}
	if (n <= 3)  {
		return true;
	}

	if (n%2 == 0 || n%3 == 0) {
		return false;
	}
	for (int i=5; i*i<=n; i=i+6){
		if (n%i == 0 || n%(i+2) == 0){
			return false;
		}
	}

	return true;
}
/*
1 // odd
1 + 2 //odd
1 + 2 - 3 // even
1 + 2 -3 + 4 // even
1 + 2 - 3 + 4 - 5 //odd
1 + 2 - 3 + 4 - 5 + 6 //odd
1 + 2 - 3 + 4 - 5 + 6 - 7 // even
1 + 2 - 3 + 4 - 5 + 6 - 7 + 8 //even
*/

int main(){
	ios_base::sync_with_stdio(0);
	lli t,n,a,b,c,d,e,f,x,y;
	cin>>n;
	lli arr[64];
	for (int i = 0; i < 50; i+=4){
		arr[i] = 0,
		arr[i+1] = 0,
		arr[i+2] = 1,
		arr[i+3] = 1;
	}
	if(arr[n-1] & 1){
		cout<<"black"<<endl;
	}
	else cout<<"grimy"<<endl;
	bye;
}

