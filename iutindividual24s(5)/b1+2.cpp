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
    ll idx=-1;
    for(int i=1;i<len-1;i++){
        if(s[i]=='a'){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<s[0]<<" ";
        for(int i=1;i<len-1;i++){
            cout<<s[i];
        }
        cout<<" ";
        cout<<s[len-1]<<"\n";
    }
    else{
        for(int i=0;i<idx;i++){
            cout<<s[i];
        }
        cout<<" ";
        cout<<s[idx]<<" ";
        for(int i=idx+1;i<len;i++){
            cout<<s[i];
        }
        cout<<"\n";
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