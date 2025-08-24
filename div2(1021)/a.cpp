#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    ll freq[10]={0};
    for(auto it : s){
        freq[it-'0']++;
    }
    string res="";
    for (int i=0;i<10;i++){
        ll x=10-(i+1);
        for(int j=x;j<=9;j++){
            if (freq[j]>0){
                res+=(j+'0');
                freq[j]--;
                break;
            }
        }
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
