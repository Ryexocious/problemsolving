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
    ll n;
    cin>>n;
    if(n%2!=0 && n<27){
        cout<<-1<<"\n";
        return;
    }
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<<i<<" "<<i<<" ";
        }
    }
    else{
        vec v(n);
        v[0]=1,v[9]=1,v[25]=1;
        ll j=3,co=0;
        for(int i=0;i<n;i++){
            if(i==0 || i== 9 || i==25){
                continue;
            }
            else if(i==10 || i==26){
                v[i]=2;
            }
            else{
                if(co<2){
                    co++;
                    v[i]=j;
                }
                else{
                    co=0;i--;
                    j++;
                }
            }
        }
        for(auto it : v){
            cout<<it<<" ";
        }
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}