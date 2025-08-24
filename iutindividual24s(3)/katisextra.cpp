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
    string s;
    cin>>s;
    ll co=0,l;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            l=i;
        }
        if(s[i]=='|'){
            co++;
        }
    }
    if(co%2!=0){
        co++;
    }
    co/=2;
    ll co2=0;
    for(int i=0;i<l;i++){
        if(s[i]=='|'){
            co2++;
        }
    }
    if(co==co2){
        cout<<"correct"<<"\n";
    }
    else{
        cout<<"fix"<<"\n";
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