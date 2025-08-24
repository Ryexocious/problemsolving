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
    cin>>n;
    vec v(n);
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    vec v2;
    for(auto &[val,count] : m){
        if(count>=2) v2.pb(val);
    }
    sort(all(v2));
    for(auto &[val, count] : m){
        if(count>=4){
            cout<<val<<" "<<val<<" "<<val<<" "<<val<<"\n";
            return;
        }
    }
    if(v2.size()>=2){
        cout<<v2[0]<<" "<<v2[0]<<" "<<v2[1]<<" "<<v2[1]<<"\n";
        return;
    }
    if(v2.size()==1){
        ll c=v2[0];
        vec v3;
        for(auto &[val, count] : m){
            if(val!=c || count>2) v3.pb(val);
        }
        sort(all(v3));
        for(int i=1;i<v3.size();i++){
            ll a=v3[i-1];
            ll b=v3[i];
            if(abs(a-b)<2*c){
                cout<<c<<" "<<c<<" "<<a<<" "<<b<<"\n";
                return;
            }
        }
        cout<<"-1\n";
        return;
    }
    cout<<"-1\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

