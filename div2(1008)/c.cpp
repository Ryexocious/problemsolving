#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve() {
    ll n,mx=0;
    cin>>n;
    vec v(2*n);
    for(int i=0;i<2*n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    vec v2;
    sort(all(v));
    v2.push_back(v[2*n-1]);
	ll sum =v2[0];
	for(int i=0;i<2*n-2;i+= 2){
		v2.pb(v[i+1]); 
        v2.pb(v[i]);
		sum-=(v[i+1]-v[i]);
	}
	v2.pb(sum+v[2*n-2]);
	v2.pb(v[2*n-2]);
    for(auto it :v2){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}