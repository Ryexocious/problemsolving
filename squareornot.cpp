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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
void solve() {
    int n;
    string s;
    cin >> n >> s;
    int x=sqrt(n);
    if (x*x!=n) {
        cn;
        return;
    }
    vector<vector<char>> v(x, vector<char>(x));
    for (int i=0;i<n;i++) {
        v[i/x][i%x]=s[i];
    }
    for (int i=0;i<x;i++) {
        if (v[0][i]!='1'|| v[x-1][i]!='1') {
            cn;
            return;
        }
    }
    for (int i = 0; i < x; ++i) {
        if (v[i][0]!='1'|| v[i][x-1]!='1') {
            cn;
            return;
        }
    }
    for (int i=1;i<x-1;i++) {
        for (int j=1;j<x-1;j++) {
            if (v[i][j]!='0') {
                cn;
                return;
            }
        }
    }
    cy;
}

int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}