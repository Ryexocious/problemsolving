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
const ll mx=1e7+10;
vector<int> primes;
vector<int> sieve(int max_n) {
    vector<bool> is_prime(max_n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= max_n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= max_n; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}
void solve() {
   ll n;
   cin >> n;
   ll co = 0;
   for (auto it : primes) {
       if (it>n) break;
       ll d=n/it;
       co+=d; 
   }
   cout<<co<<'\n';
}

int main() {
    fast;
    int t;
    cin >> t;
    primes = sieve(mx);
    while(t--){
        solve();
    } 
}



