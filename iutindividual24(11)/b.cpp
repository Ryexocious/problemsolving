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
    ll len=s.length();
    for(int i=0;i<len;i++){
        if((i+1)%2!=0){
            if(s[i]<'a' || s[i]>'z'){
                cn;
                return;
            }
        }
        else{
            if(s[i]<'A' || s[i]>'Z'){
                cn;
                return;
            }
        }
    }
    cy;
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}