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
    ll n,mx=0,ev=0,odd=0;
    cin>>n;
    vec v(n),res;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) ev++;
        else odd++;
        mx=max(mx,v[i]);
    }
    if(mx==0){
        cout<<0<<"\n"<<"\n";
        return;
    }
    ll d=29;
    for(int i=0;i<30;i++){
        if(mx!=1)mx=1<<(d--);
        for(int i=0;i<n;i++){
            v[i]=abs(v[i]-mx);
        }
        res.pb(mx);
    }
    map<ll,ll>mp;;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    //cout<<mx<<"\n";
    if(mp.size()==1){
        if(ev!=0){
            res.pb(1);
        }
        cout<<res.size()<<"\n";
        for(auto it: res){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<-1<<'\n';
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