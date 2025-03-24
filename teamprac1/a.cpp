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
void solve(int t){
    int n,m,res;
    cin>>n>>m;
    if(n<3){
        res=n*m;
    }
    else if(n%2!=0){
        int z=(n+1)/2,k=(m+1)/2;
        res=z*k+(z-1)*(m-k);
    }
    else{
        int z=n/2,k=(m+1)/2;
        res=z*k+z*(m-k);
    }
    cout<<"Case "<<t<<": "<<res<<"\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }   
}