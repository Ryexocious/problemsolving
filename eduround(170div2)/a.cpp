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
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve(){
    string s,t;
    cin>>s>>t;
    int len=s.length(),len2=t.length(),co=0;
    if(len>len2){
        for(int i=0;i<len;i++){
            if(s[i]!=t[i]){
                break;
            }
            co++;
        }
    }
    else{
        for(int i=0;i<len2;i++){
            if(s[i]!=t[i]){
                break;
            }
            co++;
        }
    }
    if(co==0){
        cout<<len+len2<<"\n";
    }
    else{
        int res=co+1+len-co+len2-co;
        cout<<res<<"\n";
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