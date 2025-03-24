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
// vector<ll> numberOfDivisors(ll num) {
//     vec tmp;
//     for (int i = 2; (ll)i * i <= num; i++) {
//         if(num % i == 0) {
//             tmp.pb(num/i);
//             tmp.pb(i); 
//         }
//     }
//     return tmp;
// }
void solve(){
    ll n;
    cin>>n;
    //vec div=numberOfDivisors(n);
    //sort(all(div));
    //cout<<d<<"\n";
    if(n&1){
        cout<<"Bob"<<'\n';
        return;
    }
    else{
        ll co=0;
        if((n&(n-1))==0){
            co=log2(n);
            if(co%2!=0){
                cout<<"Bob"<<'\n';
            }
            else{
                cout<<"Alice"<<"\n";
            }
        }
        else{
            cout<<"Alice"<<"\n";
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