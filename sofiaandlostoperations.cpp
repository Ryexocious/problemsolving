#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<ll,ll> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n,m,x;
    cin>>n;
    vec v(n),v2(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    cin>>m;
    vec v3(m);
    mp m2,m3;
    for(int i=0;i<m;i++){
        cin>>v3[i];
        m2[v3[i]]++;
    }
    for(int i=0;i<n;i++){
        if(v[i]!=v2[i]){
            m3[v2[i]]++;
        }
    }
    bool chk=true;
    for(auto it :m3){
        if(m2[it.first]<it.second){
            chk=false;
            break;
        }
    }
    if(auto it=find(v2.begin(),v2.end(),v3[m-1])==v2.end()){
        chk=false;
    }
    if(chk){
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