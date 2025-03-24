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
ll g1(ll x){
    string s=to_string(x);
    sort(s.rbegin(),s.rend());
    return stoll(s);
}
ll g2(ll x){
    string s=to_string(x);
    sort(all(s));
    return stoll(s);
}
ll f(ll x){
    return g1(x)-g2(x);
}
void solve(){
    ll N,K;
    cin>>N>>K;
    ll a=N;
    for(ll i=0;i<K;i++){
        a=f(a);
    }
    cout<<a<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}
