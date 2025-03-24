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
    vec v(n),v2(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) cin>>v2[i];
    set<ll>st;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            st.insert(v[i]+v2[j]);
        }
    }
    if(st.size()>=3){
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