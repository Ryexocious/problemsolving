#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef vector<string> vec;
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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
void solve(){
    vec v2;
    vector<int>v;
    string s,t;
    cin>>s>>t;
    int len=s.length(),co=0;
    for(int i=0;i<len;i++){
        if(s[i]>t[i]){
            co++;
            v.pb(i);
        }
    }
    for(int i=len-1;i>=0;i--){
        if(s[i]<t[i]){
            co++;
            v.pb(i);
        }
    }
    cout<<co<<"\n";
    for(int i=0;i<co;i++){
        s[v[i]]=t[v[i]];
        v2.pb(s);
    }
    for(auto it : v2){
        cout<<it<<"\n";
    }
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}