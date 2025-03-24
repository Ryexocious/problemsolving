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
    ll n,x,k,res=0,y;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            x--;
        }
        else{
            x++;
        }
        if(x==0){
            res++;
            y=i+1;
            break;
        }
    }
    ll d=0,idx;
    bool z=false;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            d--;
        }
        else{
            d++;
        }
        if(d==0){
            idx=i+1;
            z=true;
            break;
        }
    }
    if(z && res==1){
       res+=(k-y)/idx;
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}