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
    int n,d,co=0;
    cin>>n>>d;
    string s,s2="";
    cin>>s;
    for(int i=0;i<n;i++){
        if(co==0 && (s[i]-'0')<d){
            s2+=char(d+'0');
            s2+=s[i];
            co++;
        }
        else{
            s2+=s[i];
        }
        if(co==0 && i==n-1){
            s2+=char(d+'0');
            co++;
        }
    }
    cout<<s2<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}