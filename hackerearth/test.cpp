#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <utility>
#include <list>
#include <iomanip>
#include <stack>
using namespace std;

#define bye return 0
#define pb push_back
#define mp make_pair
#define mod(n) (n) % 1000000007
#define e_val 2.718281828
#define stp(a,b) a.push(b)

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

inline bool isEven(lli x){
	if(x&1) return false;
	else return true;
}

class CupCakeFactory{
private:
	int day; //0 to 6 for days from sunday to saturday
public:
	CupCakeFactory();
	void getSugar();
	void getFlour();
	void getCream();
};


CupCakeFactory::CupCakeFactory(){
	this->day = 0;
}


void CupCakeFactory::getSugar(){
	//do all the stuff;
}

void CupCakeFactory::getFlour(){
	cout<<this->day;
}

void CupCakeFactory::getCream(){
	cout<<this->day<<endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	//flour cream and sugar in equal quantity, one unit each
	//sugar should be used within a week of procurement
	CupCakeFactory c;
	c.getFlour();
	bye;
}
