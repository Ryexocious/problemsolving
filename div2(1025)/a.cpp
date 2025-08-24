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
    vec v(n);
    ll co=0,co2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==0){
            co++;
        }
        else{
            co2++;
        }
    }
    bool x=true;
    for(int i=0;i<n-1;i++){
        if(v[i]==0 && v[i+1]==0){
            x=false;
            break;
        }
    }
    if(!x || co2>n-1){
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