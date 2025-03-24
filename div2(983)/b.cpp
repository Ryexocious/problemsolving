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
void solve() {
    int n,k,co=0;
    cin>>n>>k;
    vector<int>v(n);
    bool chk=true;
    if((n+1)/2==k){
        cout<<1<<"\n"<<1<<"\n";
        return;
    }
    if(k<2 || k>=n){
        cout<<-1<<"\n";
        return;
    }
    int d=k-1,x=n-k;
    if(d%2==0){
        x--;
        co++;
    }
    if(x%2==0){
        chk=false;
    }
    if(chk){
        cout<<3<<"\n";
        if(co>0){
            cout<<1<<" "<<k-1<<" "<<k+2<<"\n";
        }
        else{
            cout<<1<<" "<<k<<" "<<k+1<<"\n";
        }
    }
    else{
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
