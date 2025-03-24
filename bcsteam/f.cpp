#include <bits/stdc++.h>
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
#define pob pop_back
#define pof pop_front
#define mfor(i,n) for(int i=0;i<(n);i++)
#define rfor(i,n) for(int i=(n-1);i>0;i--)
vec v2={31,28,31,30,31,30,31,31,30,31,30,31};
vec yearstore;
bool leapchk(int x) {
    return  ((x%4==0 && x%100!=0) || x%400==0);
}
void precal(){
    int ddayof19=4,cur=1970;
    for(int i=0;i<(2037+1-1970);i++) {
        cur=cur+i;
        if(leapchk(cur)){
            v2[1]=29;
        }
        else{
            v2[1]=28;
        }
        ll res=0;
        for(int i=0;i<12;i++){
            ll k=(v2[i]+ddayof19+6)/7;
            res+=k;
            ddayof19 =(ddayof19+ v2[i])%7;
        }
        yearstore.pb(res);
    }
}
void solve(){
    int z;
    cin>>z;
    cout<<yearstore[z-1970]<<"\n";
}
int main() {
    fast;
    precal();
    int t=1;
    while(t--){
        solve();
    }
}
