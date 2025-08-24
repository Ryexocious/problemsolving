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
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    if(v[n-1]!=v2[n-1]){
        cn;
        return;
    }
    bool chk=true;
    for(int i=n-2;i>=0;i--){
        ll x=v[i]^v[i+1];
        ll y=v[i]^v2[i+1];
        if(x!=v2[i] && y!=v2[i] && v[i]!=v2[i]){
            chk=false;
            break;
        }
    }
    if(chk){
        cy;
    }
    else{
        cn;
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