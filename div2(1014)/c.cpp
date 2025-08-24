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
    ll sum=0;
    vec v(n),vo,v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2!=0){
            vo.pb(v[i]);
        }
        else{
            v2.pb(v[i]);
            sum+=v[i];
        }
    }
    if(v2.size()==0){
        sort(all(vo));
        cout<<vo[vo.size()-1]<<'\n';
    }
    else if(vo.size()==0){
        sort(all(v2));
        cout<<v2[v2.size()-1]<<'\n';
    }
    else{
        sum+=vo[vo.size()-1];
        for(int i=0;i<vo.size()-1;i++){
            sum+=vo[i]-1;
        }
        cout<<sum<<"\n";
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