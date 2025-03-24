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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<ll>st;
    vec v2;
    for(int i=0;i<n;i++){
        if(st.find(v[i])==st.end()){
            v2.push_back(v[i]);
            st.insert(v[i]);
        }
    }
    for(int i=1;i<=n;i++){
        if(st.find(i)==st.end()){
            v2.push_back(i);
        }
    }
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}