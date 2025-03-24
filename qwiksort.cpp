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
    ll n,d=0;
    cin>>n;
    vec v((2*n)+1,0),v2;
    for(int i=1;i<=2*n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=2*n;i++){
        if(v[i]<v[i-1]){
            d++;
            break;
        }
    }
    if(d!=0){
        cout<<10<<"\n";
        if(n%2!=0){
            cout<<n-n/2<<" "<<n+n/2<<"\n";
            cout<<n-n/2<<" "<<n+n/2<<"\n";
        }
        else{
            cout<<n-n/2<<" "<<n+n/2-1<<"\n";
            cout<<n-n/2+1<<" "<<n+n/2<<"\n";
        }
        cout<<1<<" "<<n<<"\n";
        cout<<n+1<<" "<<2*n<<"\n";
        if(n%2!=0){
            cout<<n-n/2<<" "<<n+n/2<<"\n";
            cout<<n-n/2<<" "<<n+n/2<<"\n";
        }
        else{
            cout<<n-n/2<<" "<<n+n/2-1<<"\n";
            cout<<n-n/2+1<<" "<<n+n/2<<"\n";
        }
        cout<<n+1<<" "<<2*n<<"\n";
        cout<<1<<" "<<n<<"\n";
        if(n%2!=0){
            cout<<n-n/2<<" "<<n+n/2<<"\n";
            cout<<n-n/2<<" "<<n+n/2<<"\n";
        }
        else{
            cout<<n-n/2<<" "<<n+n/2-1<<"\n";
            cout<<n-n/2+1<<" "<<n+n/2<<"\n";
        }
        

    }
    else{
        cout<<0<<"\n";
    }
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