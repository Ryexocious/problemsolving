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
    bool x=false;
    map<ll,ll>m1,m2;
    m1[0]=3;
    m1[1]=1;
    m1[2]=2;
    m1[3]=1;
    m1[5]=1;
    vec v(n);
    ll res=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m2[v[i]]++;
        if(m2[0] >= m1[0] && m2[1] >= m1[1] && m2[2] >= m1[2] && m2[3] >= m1[3] && m2[5] >= m1[5] && !x){
            x=true;
            res=i+1;
        }
    }
    cout<<res<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}