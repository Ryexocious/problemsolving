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
    string a;
    cin >> a;
    bool chk=false;
    for (int i = 0; i < a.size()-1; i++) {
        if(a[i]=='0'&&!chk){
            chk=true;
            continue;
        }
        cout<<a[i];
    }
    if(chk){
        cout<<a[a.size()-1];
    }
    cout << "\n";
}
int main(){
    fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
}
