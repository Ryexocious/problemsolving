#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    ll n;
    cin>>n;
    vector<vec>v(n+1,vec(n+1));
    vec v2(2*n+1,0);
    set<ll>st;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>v[i][j];
            ll idx=i+j;
            v2[idx]=v[i][j];
            st.insert(v[i][j]);
        }
    }
    ll x=1;
    for(int i=1;i<=2*n;i++){
        if(v2[i]==0){
            while(st.count(x)) x++;
            v2[i]=x;
            x++;
        }
    }
    for(int i=1;i<=2*n;i++){ 
        cout<<v2[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }   
}
