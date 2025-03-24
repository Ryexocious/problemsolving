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
void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1) {
        cn;
        return;
    }
    string rev=s,s2=s;
    sort(all(s2));
    reverse(rev.begin(),rev.end());
    if(s<rev){
        cy;
        return;
    }
    if (k == 0) {
        cn;
        return;
    }
    if(k==1){
        if(s2[0]!=s[0] && s2[0]!=rev[0]){
            cy;
        }
        else if(s2[0]==s2[n-1]){
            cn;
        }
        else{
            cy;
        }
    }
    else{
        if(s2[0]==s2[n-1]){
            cn;
        }
        else{
            cy;
        }
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