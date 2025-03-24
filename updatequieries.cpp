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
    int n,m,d=-1;
    cin>>n>>m;
    string s;
    cin>>s;
    vec v(m);
    set<int>st;
    for(int i=0;i<m;i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    string s2;
    cin>>s2;
    sort(all(s2));
    sort(all(v));
    ll i=0;
    for(auto it: st){
        s[it-1]=s2[i++];
    }
    cout<<s<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}