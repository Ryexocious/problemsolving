#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string, int> mp;
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve() {
    string s,a="",b="";
    cin>>s;
    int n=s.size();
    if(s[1]=='0'){
    cout<<s<<' '<<0<<endl; 
        return;
    }
    a+="1";
    for(int i=0;i<n;i++){
        a+="0";
        if(i!=n-1 && s[i]=='1'&& s[i+1]=='0'){
        b+="1";
        }
        else if(s[i]=='0') b+="0";
    }

    cout<<a<<' '<<b<<endl;
}
int main() {
    fast;
    int t=1;
    while(t--){
        solve();
    }
}
