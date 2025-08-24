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
    ll n;
    string s;
    cin >> n >> s;
    ll co3 = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            co3++;
        }
    }
    ll co = count(s.begin(), s.end(), '0');
    ll co2 = n - co; 
    if (co3 == 0 && co==0) {
        cout << n + 1 << "\n";
        return;
    }
    if (co3 == 0 && co2==0) {
        cout << n << "\n";
        return;
    }
    if (co == 0 || co2 == 0) {
        cout << n << "\n";
        return;
    }
    if (co3 == 1) {
        cout << n + co3 << "\n";
        return;
    }
    cout << n + co3 - 1 << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}