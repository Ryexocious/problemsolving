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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
int ar[1001];
const ll mx = 1000;
void solve() {
    ll x, y, k;
    cin >> x >> y >> k;
    ll x1 = (x + k - 1) / k;
    ll y1 = (y + k - 1) / k;
    ll res = max(x1, y1) * 2;
    if (x1 > y1) {
        res--;
    }
    cout << res << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
}
