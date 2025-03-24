#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<int,int> mp;
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
void solve() {
    ll n;
    cin >> n;
    vec v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    if(n == 1) {
        cout << 1 << "\n";
        return;
    }
    mp diffco;
    for(int i = 0; i < n; i+=2) {
        ll d = v[i+1] - v[i];
        diffco[d]++;
    }

    ll max_freq = 0; 
    ll d2 = 0; 
    for(auto it : diffco) {
        if(it.second > max_freq) {
            max_freq = it.second;
            d2 = it.first;
        }
    }

    ll co = 0;
    for(auto it : diffco) {
        if(it.first > d2) {
            co++;
        }
    }

    ll result = d2; 
    if(co > 1) {
        result = v[n - 1] - v[0];
    }
    
    cout << result << "\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}


