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
void solve() {
    ll n, x;
    cin>>n>>x;
    vec v;
    ll x3=0;
    for(int i=0;i<n;i++){
        ll d=x3|x|i;
        if(d!=x){
            v.pb(x);
        }
        else{
            v.pb(i);
            x3|=i;
        }

    }
    if(x3!=x){
        v.pop_back();
        v.pb(x);
    }
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout <<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
