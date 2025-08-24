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
    string s;
    cin>>s;
    map<char,ll>m,m2;
    for(int i=0;i<n-1;i++){
        m[s[i]]++;
    }
    for(int i=1;i<n;i++){
        m2[s[i]]++;
    }
    bool x=false;
    for(auto it: m){
        if(it.second>1){
            x=true;
            break;
        }
    }
    for(auto it: m2){
        if(it.second>1){
            x=true;
            break;
        }
    }
    if(x){
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