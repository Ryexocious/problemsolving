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
    if(s.size() == 1) {
        cout<<s<<endl;
        return;
    }
    for(ll i=1; i<s.size(); i++) {
        while(i >= 1 && (s[i] - '0') - 1 > (s[i-1] - '0') && (s[i] - '0') > 0) {
            swap(s[i], s[i-1]);
            ll idx = s[i-1]-'0';
            idx--;
            s[i-1] = idx+'0';
            i--;
        }
    }
    cout<<s<<endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}

























