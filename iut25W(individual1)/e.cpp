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
    ll n;
    cin>>n;
    ll co=0,j=1;
    while(n!=0){
        if(j%2!=0){
            if(n%2!=0){
                co++;
                n--;
            }
            else{
                if((n/2)%2!=0 || n/2==2){
                    co+=n/2;
                    n/=2;
                }
                else{
                    co++;
                    n--;
                }
            }
        }
        else{
            if(n%2!=0){
                n--;
            }
            else{
                if((n/2)%2!=0 || n/2==2){
                    n/=2;
                }
                else{
                    n--;
                }
            }
        }
        j++;
    }
    cout<<co<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}