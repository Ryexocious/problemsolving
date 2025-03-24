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
    set<char>s2;
    for(int i=0;i<len;i++){
        if(s[i]==s[i+1]){
            i++;
        }
        else{
            s2.insert(s[i]);
        }
    }
    for(auto it : s2){
        cout<<it;
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}