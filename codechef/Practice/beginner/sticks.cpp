#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef unsigned long long int ulli;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(0);
	lli t,n;
	cin>>t;
	while(t--){
		cin>>n;
		lli arr[n];
		for (int i = 0; i < n; ++i){
			cin>>arr[i];	
		}
		rsort(arr,arr+n);
		for (int i = 0; i < n; ++i){
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
