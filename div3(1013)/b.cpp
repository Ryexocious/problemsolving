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
void solve(){
    ll n,x;
    cin>>n>>x;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    ll co=0,co2=0;
    for (int i=0;i<n;i++){
        co2++;
        if (co2*v[i]>=x){
            co++;
            co2=0;
        }
    }
    cout<<co<<"\n";
}
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


