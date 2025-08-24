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
    ll n,c;
    cin>>n>>c;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<bool> vis(n,false);
    ll res=0;
    for(int i=0;i<n;i++){
        ll d=-1,d2=-1;
        for(int j=0;j<n;j++){
            if(vis[j]) continue;
            if(i>=60) continue;
            ll d3=v[j]<<i;
            if(d3<=c && d3>d2){
                d2=d3;
                d=j;
            }
        }
        if(d!=-1){
            vis[d]=true;
        } 
        else {
            for(int k=0;k<n;k++){
                if(!vis[k]){
                    vis[k]= true;
                    res++;
                    break;
                }
            }
        }
    }
    cout<<res<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
