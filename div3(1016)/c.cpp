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
bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void solve() {
    ll x,k;
    cin >> x >> k;
    if (x==1){
        if(k==2){
            cy;
        } 
        else{
            cn;
        }
    } 
    else{
        if(k==1){
            if(is_prime(x)){
                cy;
            }
            else{
                cn;
            }
        }
        else{
            cn;
        }
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
