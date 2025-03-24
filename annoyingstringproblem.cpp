#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
ll gcd(ll x, ll y) {
	return y ? gcd(y, x % y) : x;
}
bool solve() {
	string s,x,y;
	cin>>s>>x>>y;
	ll s_size = s.size();
	ll x_size = x.size();
	ll y_size = y.size();
	ll a1=0, a2=0, b1=0, b2=0;
	for(ll i=0; i<x.size(); i++) {
		if(x[i]=='0') a1++;
		if(x[i]=='1') b1++;
	}
	for(ll i=0; i<y.size(); i++) {
		if(y[i]=='0') a2++;
		if(y[i]=='1') b2++;
	}
	if(a1 == a2) {
		return true;
	}
	if(b1 == b2 || (a1-a2)*s_size % (b2 - b1)!=0 || (a1-a2)*s_size / (b2 - b1)<0) {
		return false;
	}
	ll t_size = (a1-a2)*s_size / (b2 - b1);

	ll g=gcd(s_size, t_size);
	for (int i = 0; i + g < s_size; i++) {
		if (s[i] != s[i + g]) {
			return false;
		}
	}
	return true;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        cout<<(solve()? "Yes\n" : "No\n");
    }
}