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
    map<ll,ll>m,m2,m3;
    ll n;
    cin>>n;
    set<ll>st;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        m3[x]++;
        st.insert(x);
        if(m3[x]==1){
            m[x]=i+1;
        }
        if(m3[x]<=2){
            m2[x]=i+1;
        }
    }
    // for(auto it : m2){
    //     cout<<it.first<<" "<<it.second<<"\n";
    // }
    ll co=1e9;
    for(auto it :st){
        if(m[it]!=m2[it]){
            co=min(co,abs(m[it]-m2[it])+1);
        }
        //cout<<co<<"\n";
    }
    if(co==1e9){
        cout<<-1<<"\n";
    }
    else{
        cout<<co<<"\n";
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