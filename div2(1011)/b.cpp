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
    ll co=0;
    bool chk=false;
    vector<pair<ll,ll>>v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=n-1;i>=0;i--){
        if(i==0 && v[i]==0){
            v2.pb({i+1,i+2});
            i--;
            co++;
        }
        if(v[i]==0){
            v2.pb({i,i+1});
            i--;
            co++;
        }
    }
    cout<<v2.size()+1<<"\n";
    for(auto it : v2){
        cout<<it.first<<" "<<it.second<<'\n';
    }
    cout<<1<<" "<<n-co<<"\n";
    
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}