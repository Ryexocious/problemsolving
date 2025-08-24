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
void solve(){
    string p, s;
    cin>>p>>s;
    ll n = p.length(), m = s.length();
    if(p[0]!=s[0]){
        cn;
        return;
    }
    p='x'+p;
    s='x'+s;
    vec v,v2;
    //cout<<p<<s<<"\n";
    for(int i=1;i<=n;i++){
        if(p[i]==p[i-1]){
            v[v.size()-1]++;
        }
        else{
            v.pb(1);
        }
    }
    for(int i=1;i<=m;i++){
        if(s[i]==s[i-1]){
            v2[v2.size()-1]++;
        }
        else{
            v2.pb(1);
        }
    }
    //cout<<v.size()<<v2.size()<<"\n";
    if(v2.size()==v.size()){
        for(int i=0;i<v.size();i++){
            if(v2[i]<v[i] || v2[i]>v[i]*2){
                cn;
                return;
            }
        }
        cy;
    }
    else{
        cn;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}