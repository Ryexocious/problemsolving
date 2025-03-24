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
    ll n,x;
    cin>>n;
    vec v;
    for(int i=0;i<n;i++){
        cin>>x;
        if(i==0 || x!=v.back()) v.pb(x);
    }
    ll co=0;
    for(int i=0;i<v.size();i++){
        if((i == 0 || v[i-1] > v[i]) && (i == v.size()-1 || v[i] < v[i+1]))
        {
            co++;
        }
    }
    if(co==1){
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