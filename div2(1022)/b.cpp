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
#define pf push_front
void solve(){
    ll n, x;
    cin >> n >> x;
    ll ones = __builtin_popcountll(x);
    if(n==1){
        if (x == 0) cout << "-1\n";
        else cout << x << '\n';
        return;
    }
    if(ones>n){
        cout<<x<<"\n";
    }
    else{
        if((n-ones)%2==0){
            cout<<x+(n-ones)<<"\n";
        }
        else{
            if(x==0 || x==1){
                cout<<x+(n-ones)+3<<"\n";
            }
            else{
                cout<<x+(n-ones)+1<<"\n";
            }
        }
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }
}
