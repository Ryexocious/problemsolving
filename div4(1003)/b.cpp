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
    bool x=false;
    for(int i=0;i<len-1;i++){
        if(s[i]==s[i+1]){
            x=true;
            break;
        }
    }
    if(x){
        cout<<1<<"\n";
    }
    else{
        cout<<len<<"\n";
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