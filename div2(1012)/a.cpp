#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve() {
    ll x, y, a;
    cin >> x >> y >> a;
    double d = a + 0.5;
    ll b = d / (x + y); 
    ll res = b * (x + y);
    if (res + x >= d) {
        cn;
    } 
    else {
        cy;
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
