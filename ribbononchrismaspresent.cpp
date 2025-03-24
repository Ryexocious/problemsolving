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
    ll n,co=0;
    cin>>n;
    vec v(n);
    stack<ll>st;
    for(int i=0;i<n;i++) cin>>v[i];
    st.push(0);
    for(int i=0;i<n;i++){
        if(st.top()>v[i]){
            while(st.top()>v[i]){
                st.pop();
            }
            if(st.top()<v[i]){
                st.push(v[i]);
                co++;
            }
        }
        else if(st.top()<v[i]){
            st.push(v[i]);
            co++;
        }
        //cout<<co<<"\n";
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}