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
    int n,x,y;
    cin>>n>>x>>y;
    vec v(n);
    for(int i=0;i<n;i++){
        v[i]=i%3;
    }
    if(v[x-1]==v[y-1]){
        v[y-1]=(v[x-1]+1)%3;
    }
    for(int i=0;i<n;i++){
        ll l=(i-1+n)%n,r=(i+1)%n;
        vec v2={v[l],v[r]};
        ll chk=0;
        while(find(v2.begin(),v2.end(),chk)!=v2.end()){
            chk++;
        }
        v[i]=chk;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}




