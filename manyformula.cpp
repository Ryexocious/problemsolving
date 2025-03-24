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
    string n;
    cin>>n;
    ll len=n.length(),res=0;
    for(int mask=0;mask<(1<<len-1);mask++){
        ll num=0,num2=0;
        for (int i = 0; i < len; i++) {
            num = num * 10 + (n[i] - '0');
            if ((mask >> i) & 1 || i == len - 1) {
                num2 += num;
                num = 0; 
            }
        }
        //cout<<num2<<"\n";
        res+=num2;
    }
    cout<<res<<"\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}