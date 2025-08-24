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
    ll n;
    cin>>n;
    vec v(n),v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    v2=v;
    sort(all(v2));
    vec v3;
    ll co=0;
    for(int i=0;i<n;i++){
        if(v[i]==v2[i]){
            co++;
        }
        else{
            v3.pb(v[i]);
        }
    }
    if(co==n){
        cn;
    }
    else{
        cy;
        cout<<v3.size()<<"\n";
        for(auto it : v3){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}