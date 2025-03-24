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
    int n,m;
    cin>>n>>m;
    vector<vec>v(n,vec(m));
    for (int i = 0; i < n; i++) {
        string s;
        cin>>s;
        for(int j=0;j<m;j++){
            v[i][j]=s[j]-'0';
        }
    }
    vec rx(n,0),cx(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            rx[i]^=v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cx[j]^=v[i][j];
        }
    }
    ll co=0,co2=0;
    for(int i=0;i<n;i++){
        co+=rx[i];
    }
    for(int i=0;i<m;i++){
        co2+=cx[i];
    }
    cout<<max(co,co2)<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

