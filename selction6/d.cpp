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
    int n,k,d;
    cin>>n>>k;
    d=n-k;
    if(n-k==1){
        cout<<-1<<"\n";
    }
    else{
        vec v(n);
        for(int i=1;i<=n;i++){
            v[i-1]=i;
        }
        for(int i=k;i<n-1;i++){
            swap(v[i],v[i+1]);
        }
        for(auto it: v){
            cout<<it<<" ";
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