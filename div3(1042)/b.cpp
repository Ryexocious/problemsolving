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
    if(n==2){
        cout<<-1<<" "<<2<<"\n";
    }
    else{
        if(n%2!=0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<-1<<" ";
                }
                else{
                    cout<<3<<" ";
                }
            }
            cout<<"\n";
        }
        else{
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<-1<<" ";
                }
                else{
                    if(i!=n-1){
                        cout<<3<<" ";
                    }
                    else{
                        cout<<2<<"\n";
                    }
                }
            }
            cout<<"\n";
        }
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