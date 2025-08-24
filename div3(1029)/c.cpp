#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve() {
    ll n; 
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<ll>st,curr;
    ll res=0,co=0;
    for(int i=0;i<n;i++){
        ll x=v[i];
        if(curr.find(x)==curr.end()){
            curr.insert(x);
            if(st.find(x)!=st.end()){
                co++;
            }
        }
        if(co==st.size()){
            res++;
            st=curr;
            curr.clear();
            co=0;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}