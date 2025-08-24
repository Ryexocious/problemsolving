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
    s+=s;
    ll len=s.length(),co=0,co1=0;
    for(int i=0;i<len;i++){
        if(s[i]=='1'){
            co++;
        }
        else{
            co1=max(co1,co);
            co=0;
        }
    }
    co1=max(co1,co);
    if(co1>=len/2){
        cout<<(len/2)*(len/2)<<"\n";
    }
    else{
        cout<<(co1-co1/2)*(co1/2+1)<<'\n';
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