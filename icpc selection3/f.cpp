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
void solve(){
    ll n,m,a,b,c,d,mx=2;
    cin>>n>>m;
    vector<vector<ll>>v(n,vector<ll>(m));
    cin>>a>>b>>c>>d;
    ll chk1=(a+b)%2;
    ll chk2=(c+d)%2;
    if(chk1==chk2){
        mx=3;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==chk1){
                if(i==c-1 && j==d-1){
                    v[i][j]=2;
                }
                else{
                    v[i][j]=1;
                }
            }
            else{
                v[i][j]=mx;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
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