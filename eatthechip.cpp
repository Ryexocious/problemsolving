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
    ll h,w,xa,ya,xb,yb;
    cin>>h>>w>>xa>>ya>>xb>>yb;
    if (xb<xa){
        cout<<"Draw\n"; return;
    }
    int steps = (xb-xa+1)/2;
    if ((xb-xa)%2==1){
        if (min(w,ya+steps)<min(w,yb+steps-1)){
            cout<<"Draw\n";
        } else if (max(1ll,ya-steps)>max(1ll,yb-steps+1)){
            cout<<"Draw\n";
        } else {
            cout<<"Alice\n";
        }

    } else {
        if (min(w,ya+steps)>min(w,yb+steps)){
            cout<<"Draw\n";
        } else if (max(1ll,ya-steps)<max(1ll,yb-steps)){
            cout<<"Draw\n";
        } else {
            cout<<"Bob\n";
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