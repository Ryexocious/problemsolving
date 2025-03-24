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
    cin >> n;
    vec v(n - 2), v2(n);
    for (int i = 0; i < n - 2; i++) {
        cin >> v[i];
    }
    v2[0] = 1;
    v2[1] = 2;
    for (int i = 0; i < n - 2; i++) {
        if (v[i] == 1) {
            v2[i + 2] = v2[i + 1] = v2[i];
        } 
        else{
            if (v2[i + 1] == v2[i]) {
                v2[i + 2] = v2[i] + 1;
            }
            else {
                v2[i + 2] = v2[i];
            }
        }
    }
    for (int i = 1; i < n - 1; i++) {
        if ((v2[i - 1] == v2[i] && v2[i] == v2[i + 1]) != v[i - 1]) {
            cn;
            return;
        }
    }
    cy;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
