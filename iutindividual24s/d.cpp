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
    stack<pair<ll,ll>>st;
    ll res=0;
    for(int i=0;i<n;i++){
        ll d=v[i];
        if(!st.empty() && st.top().first==d){
            st.top().second++;
            res++;
            if(st.top().second==d){
                res-=d;
                st.pop();
            }
        } 
        else{
            st.push({d,1});
            res++;
        }
        cout<<res<<'\n';
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