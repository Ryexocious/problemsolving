#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"Yes"<<endl;
#define cn cout<<"No"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pob pop_back
void solve(){
    string s;
    cin>>s;
    ll co=1;
    for(int i=1;i<4;i++){
        if(co>=3){
            cy;
            return;
        }
        if(s[i]==s[i-1]){
            co++;
        }
        else{
            co=1;
        }
    }
    if(co>=3){
        cy;
    }
    else{
        cn;
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