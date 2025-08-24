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
void solve(){
    ll n;
    cin>>n;
    set<string> st;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
        string tmp;
        tmp += s[i];
        tmp += s[i+1];
        st.insert(tmp);
    }
    cout<<st.size()<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}