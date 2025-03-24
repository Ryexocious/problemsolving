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
    ll x, y;
    cin >> x >> y;
    if (x == y) {
        cout<<-1<<"\n";
        return;
    }
    if((x&y)==0){
        cout<<0<<"\n";
    } 
    else {
        cout<<(x&y)<<"\n";
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}