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
void solve() {
    ll n;
    cin>>n;
    vec v(n);
    if(n%2==0){
        cout<<1<<" ";
        for(int i=1;i<n;i++){
            if(i%3==1){
                cout<<1<<" ";
            }
            else if(i%3==2){
                cout<<2<<" ";
            }
            else{
                cout<<3<<" ";
            }
        }
    }
    else{
        int d=n/3;
        int mid = n / 2;
        v[mid]=3;
        v[0]=1;
        for(int i=1;i<d-1;i++){
            v[i]=2;
        }
        v[d-1]=1;
        int d2=n-2*d;
        v[d]=5;
        for(int i=d+1;i<mid;i++){
            v[i]=2;
        }
        for(int i=mid+1;i<d+d2;i++){
            v[i]=1;
        }
        v[n-d-1]=5;
        v[n-d]=2;
        for(int i=n-d+1;i<n;i++){
            v[i]=1;
        }
        v[n-1]=2;
        for(auto it :v){
            cout<<it<< " ";
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