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
    ll n,sum=0,x,q,y;
    cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]++;
        sum+=x;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(m[x]){
            sum+=m[x]*(y-x);
            m[y]+=m[x];
            m[x]=0;
        }
        cout<<sum<<"\n";
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}