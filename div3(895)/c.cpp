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
int min_divisor(int n) {
    for (int d = 2; d <= sqrt(n); d++) {
        if (n % d == 0) {
            return d; 
        }
    }
    return n; 
}
void solve(){
    int l,r;
    cin>>l>>r;
    bool x=false;
    for(int i=l;i<=r;i++){
        int chk=min_divisor(i);
        if(chk!=i){
            cout<<chk<<" "<<i-chk<<"\n";
            x=true;
            break;
        }
    }
    if(!x){
        cout<<-1<<"\n";
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