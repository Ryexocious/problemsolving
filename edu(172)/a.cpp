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
    int n,k,d=1e7,sum=0;
    cin>>n>>k;
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++){
        sum+=v[i];
        int j=k-sum;
        if(j>=0){
            d=min(d,j);
        }
    }
    cout<<d<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}