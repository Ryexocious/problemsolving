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
    int l, r;
    cin >> l >> r;
    int k = 31 - __builtin_clz(l ^ r);
    int a = l |((1 << k) - 1),
    b = a + 1,
    c = (a == l ? r : l);
    cout << a << " " << b << " " << c << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
