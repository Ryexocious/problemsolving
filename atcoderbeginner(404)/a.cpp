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
    vec v(26,0);
    for(int i=0;i<s.length();i++){
        v[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(v[i]==0){
            char c='a';
            c=(char)(c+i);
            cout<<c<<"\n";
            return;
        }

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