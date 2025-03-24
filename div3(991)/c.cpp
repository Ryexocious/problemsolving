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
    string s;
    cin >> s;
    ll sum = 0,co=0,co2=0;
    for (auto it : s) {
        int d=it-'0';
        sum += d;
        if (d == 2) co++;
        if (d == 3) co2++;
    }
    if (sum % 9 == 0) {
        cy;
        return;
    }
    for (int i = 0; i <= co; ++i) {
        for (int j = 0; j <= co2; ++j) {
            ll chk = sum + 2 * i + 6 * j;
            if (chk % 9 == 0) {
                cy;
                return;
            }
        }
    }
    cn;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}




