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
bool chk(ll x, ll y) {
    ll z = x ^ y;
    return (x + y > z) && (y + z > x) && (z + x > y);
}

void solve() {
    ll x;
    cin >> x;
    if (chk(x,x-1)){
        cout<<x-1<<"\n";
        return;
    }
    for (ll y = max(1LL,x/2-5);y<=min(x-2,x/2+5);y++){
        if (chk(x,y)) {
            cout<<y<<"\n";
            return;
        }
    }
    ll d=1LL<<(63-__builtin_clzll(x));
    ll d2=x-d;
    if(d2>0 && d2<x && chk(x,d2)){
        cout<<d2<<"\n";
        return;
    }
    if((x & (x-1))==0){
        cout<<-1<<"\n";
        return;
    }
    for(int i = 0; i < 30; i++){
        if(x & (1LL<<i)){
            ll y=x^(1LL<<i);
            if(y>0 && y<x && chk(x,y)){
                cout<<y<<"\n";
                return;
            }
        }
    }
    cout<<-1<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

