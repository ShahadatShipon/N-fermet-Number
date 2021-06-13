#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
#define ull int128_t
using namespace std;
ull kpower(ull a,ull b){
    ull p=pow(a,b);
    ull pfinal=pow(a,p);
    return pfinal;
}
ull permert(ull n)
{
    for(ull i=0;i<n;i++){
        cout << kpower(2,i)+1 <<" ";
    }
}
int main() {
	ull n;
	///cin>>n;
	permert(7);
	return 0;
}
