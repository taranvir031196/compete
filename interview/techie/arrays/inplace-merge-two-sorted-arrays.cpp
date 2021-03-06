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
#define rrep(i,n) for(int i = n - 1 ; i >= 0 ; i--)
#define crep(i,a,b) for( int i = a; i <= b; i++ )
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

void merge(int X[], int Y[], int m, int n){
	int i = 0;

	// consider each element X[i] of array X and ignore the element
	// if it is already in correct order else swap it with next smaller
	// element which happens to be first element of Y
	while (i < m){
	    // compare current element of X[] with first element of Y[]
		if (X[i] > Y[0]){
			swap(X[i], Y[0]);
			int first = Y[0];
			// move Y[0] to its correct position to maintain sorted order of Y[]
			// Note: Y[1..n-1] is already sorted
			int k;
			for (k = 1; k < n && Y[k] < first; k++)
				Y[k - 1] = Y[k];

			Y[k - 1] = first;
		}
		i++;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	lli t,n,a,b,c,d,e,f,x,y;
	cin>>n;
	lli arr[n];
	rep(i,n){
		cin>>arr[i];
	}
	cin>>m;
	lli brr[m];
	rep(i,m){
		cin>>brr[i];
	}

	bye;
}

