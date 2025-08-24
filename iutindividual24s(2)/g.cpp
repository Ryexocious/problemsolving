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
    ll n,m,h;
    cin>>n>>m>>h;
    vec v(n),v2(m);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    sort(v.rbegin(),v.rend());
    sort(v2.rbegin(),v2.rend());
    ll j=0,res=0;
    if(n<m){
        for(int i=0;i<n;i++){
            res+=min(v[i],h*v2[j]);
            j++;
        }
    }
    else{
        for(int i=0;i<m;i++){
            res+=min(v[i],h*v2[j]);
            j++;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}