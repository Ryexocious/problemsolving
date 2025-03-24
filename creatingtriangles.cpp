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
vec v={4,1,2,2};
bool IsPowerOfTwo(ll x){
    return (x != 0) && ((x & (x - 1)) == 0);
}
void solve(){
    ll k,n;
    cin>>k>>n;
    if(IsPowerOfTwo(k)){
        cout<<v[0]*2*n<<"\n";
    }
    else{
        if(k%4==0){
            cout<<v[2]*2*n<<"\n";
        }
        else{
            cout<<v[k%4]*2*n<<"\n";
        }
    }
    cout<<(4<<1)<<'\n';
}
int main(){
    fast;
    int t;
    cin>>t;
    int j=1;
    while (j<=t){
        cout<<"Case "<<j<<": ";
        solve();
        //cout<<"\n";
        j++;
    }   
}