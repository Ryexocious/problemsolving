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
vector<ll> getFactors(ll n) {
    vector<ll> factors;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
void solve(){
    int d;
    char a,b;
    cin>>a>>b;
    vec v;
    d=abs((a-'!')-(b-'!'));
    v=getFactors(d);
    for(auto it :v){
        int diff2=94/it;
        if(diff2*it!=94){
            diff2++;
        }
        cout<<it<<" "<<diff2<<"\n";
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