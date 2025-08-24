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
vector<string> rotfunc(vector<string> &S){
    ll len=S.size();
    vector<string> res(len,string(len,'0'));
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            res[j][len-1-i]=S[i][j];
        }
    }
    return res;
}
void solve(){
    ll n;
    cin>>n;
    vector<string>s(n),t(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
    }
    ll res=1e9+10;
    for(int i=0;i<4;i++){
        ll d=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s[i][j]!=t[i][j]){
                    d++;
                }
            }
        }
        res=min(res,d+i);
        s=rotfunc(s);
    }
    cout<<res<<'\n';    
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}