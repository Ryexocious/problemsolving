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
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll co=0,co2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            co++;
        }
        else{
            co2++;
        }
    }
    for(int i=0;i<m;i++){
            if(co>co2){
                co-=2;
            }
            else{
                co2-=2;
            }
        }
        if(co==co2){
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