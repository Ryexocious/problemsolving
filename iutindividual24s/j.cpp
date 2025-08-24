#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n;
    cin>>n;
    vec v(n);
    set<ll>st,st2;
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        st.insert(v[i]);
        m[v[i]]++;
    }
    ll d=0;
    while(st.count(d)){
        d++;
    }
    if(d==n){
        cn;
        return;
    }
    if(!st.count(d+1)){
        bool chk=false;
        for(int i=0;i<n;i++){
            if(v[i]<d && m[v[i]]>1){
                chk=true;
            }
            else if(v[i]>d){
                chk=true;
            }
        }
        if(chk){
            cy;
        }
        else{
            cn;
        }
        return;
    }
    ll l=-1,r=-1;
    bool x=false;
    for(int i=0;i<n;i++){
        if(v[i]==d+1){
            if(!x){
                x=true;
                l=i;
            }
            r=i;
        }
    }
    for(int i=l;i<=r;i++){
        v[i]=d;
    }
    for(int i=0;i<n;i++){
        st2.insert(v[i]);
    }
    ll d2=0;
    while(st2.count(d2)){
        d2++;
    }
    if(d2==d+1){
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