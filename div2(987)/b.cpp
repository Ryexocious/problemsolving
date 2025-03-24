#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vec;
typedef map<string,int> mp;
#define cy cout<<"YES"<<"\n";
#define cn cout<<"NO"<<"\n";
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
void solve() {
    int n;
    cin >> n;
    vec v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (abs(v[i] - v[i + 1]) == 1) {
            if(v[i]>v[i+1]){
                swap(v[i], v[i + 1]);
            }
            i++;
        }
    }
    bool chk = true;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            chk = false;
            break;
        }
    }
    if (chk) {
        cy;
    } 
    else {
        cn;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
}

