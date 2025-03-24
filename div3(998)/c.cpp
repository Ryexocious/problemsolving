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
    ll n,k;
    cin>>n>>k;
    vec v(n);
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    ll co=0;
    for(auto it : m){
        ll d=k-it.first;
        if(d==it.first){
            co+=it.second/2;
            m[it.first]-=it.first*(it.second/2);
        }
        else if(it.first<d){
            co+=min(m[it.first],m[d]);
            m[it.first]-=min(m[it.first],m[d]);
            m[d]=min(m[it.first],m[d]);
        }
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}