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
    vec v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string res="";
    ll i=0,j=n-1;
    for(int k=0;k<n;k++){
        if(k%2==0){
            if(v[i]<v[j]){
                res+='L';
                i++;
            }
            else{
                res+='R';
                j--;
            }
        }
        else{
            if(v[i]>v[j]){
                res+='L';
                i++;
            }
            else{
                res+='R';
                j--;
            }
        }
    }
    cout<<res<<"\n";   
}
int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        solve();
    }   
}


