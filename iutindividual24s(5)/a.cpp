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
    ll co=0,co2=0,idx=-1;
    bool x=false;
    for(int i=1;i<n;i++){
        if(s[i]=='L' && s[i-1]=='R'){
            x=true;
        }
        if(s[i]=='R' && s[i-1]=='L'){
            idx=i;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            co++;
        }
        if(s[i]=='R'){
            co2++;
        }
    }
    if(x){
        cout<<0<<"\n";
    }
    else if(co==0 || co2==0){
        cout<<-1<<'\n';
    }
    else{
        if(idx!=-1){
            cout<<idx<<'\n';
        }
        else{
            cout<<-1<<"\n";
        }
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