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
bool chk(ll x) {
    if (x < 0) return false;
    ll s = sqrt(x);
    return (s * s == x);
}
void solve() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << -1 << endl;
        return;
    }
    vec v;
    ll presum=0;
    for(int i=1;i<=n;i++){
        if (chk(presum + i)){
            if(i+1<=n){
                v.pb(i+1);
                v.pb(i);
                presum+=(i+1)+i;
                i++;
            } 
            else{
                cout<<-1<<endl;
                return;
            }
        } 
        else{
            v.pb(i);
            presum+=i;
        }
    }
    for(int num : v){
        cout<<num<<" ";
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

