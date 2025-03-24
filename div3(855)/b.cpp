#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<ll> vec;
typedef map<char,int> mp;
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
    ll n,res=0,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vec v(26,0),v2(26,0);
    for(int i=0;i<n;i++){
        if(s[i]>='A' && s[i]<='Z'){
            v[s[i]-'A']++;
        }
        else{
            v2[s[i]-'a']++;
        }
    }
    for(int i=0;i<26;i++){
        ll d=min(v[i],v2[i]);
        res+=d;
        v[i]-=d;v2[i]-=d;
        d=min(k,max(v[i],v2[i])/2);
        k-=d;res+=d;
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