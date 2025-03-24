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
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    vec v(n);
    ll d=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        f-=min((v[i]-d)*a,b);
        d=v[i];
    }
    if(f>0){
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