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
    ll n,res;
    cin>>n;
    vec v(n+1),pos(n+1);
    res=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        pos[v[i]]=i;
    }
    for(int i=2;i<=n;i++){
        if(pos[i-1]>pos[i]){
            res++;
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