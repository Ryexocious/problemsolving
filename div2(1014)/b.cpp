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
void solve() {
    ll n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    ll co1=0,co2=0,coe1=0,coe2=0;
    for(int i=1;i<=n;i++){
        if(i%2==0 && a[i-1]=='1'){
            coe1++;
        }
        if(i%2==0 && b[i-1]=='0'){
            coe2++;
        }
        if(i%2!=0 && a[i-1]=='1'){
            co1++;
        }
        if(i%2!=0 && b[i-1]=='0'){
            co2++;
        }
    }
    //cout<<co1<<" "<<co2<<" "<<coe1<<" "<<coe2<<"\n";
    if(coe2>=co1 && co2>=coe1){
        cy;
        return;
    }
    cn;
    
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
