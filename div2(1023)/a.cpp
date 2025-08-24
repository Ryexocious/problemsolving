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
    map<ll,ll>m;
    ll mx=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        mx=max(mx,v[i]);
    }
    if(m.size()>1){
        cy;
        for(int i=0;i<n;i++){
            if(v[i]==mx){
                cout<<2<<" ";
            }
            else{
                cout<<1<<' ';
            }
        }
        cout<<"\n";

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