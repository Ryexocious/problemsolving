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
    string s,t;
    cin>>s>>t;
    reverse(all(s));
    reverse(all(t));
    int idx,co,co2=0;
    for(int i=0;i<t.length();i++){
        if(t[i]=='1'){
            idx=i;
            break;
        }
    }
    for(int i=idx;i<s.length();i++){
        if(s[i]=='1'){
            co=i;
            break;
        }
    }
    cout<<co-idx<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}