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
    string s,t,res="";
    cin>>s>>t;
    map<char,ll>m,m2;
    set<char>s3;
    for(int i=0;i<s.length();i++){
        s3.insert(s[i]);
        m[s[i]]++;
    }
    for(int i=0;i<t.length();i++){
        s3.insert(t[i]);
        m2[t[i]]++;

    }
    for(auto it : s3){
        ll d=max(m[it],m2[it]);
        for (ll i=0;i<d;i++){
            res+=it;
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }   
}