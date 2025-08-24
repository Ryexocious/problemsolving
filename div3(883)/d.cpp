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
    double n,d,h;
    cin>>n>>d>>h;
    vector<double> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    double res=0.5*d*h;
    for(int i=n-2;i>=0;i--){
        if(v[i+1]-v[i]>=h){
            res+=0.5*d*h;
        }
        else{
            res+=0.5*(v[i+1]-v[i])*(((h-(v[i+1]-v[i]))/h)*d+d);
        }
    }
    cout << fixed << setprecision(7) << res << "\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}