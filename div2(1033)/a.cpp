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
    pair<ll,ll> v[3];
    for (int i=0;i<3;i++) {
        cin>>v[i].first>>v[i].second;
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(j==i) continue;
            for(int k=0;k<3;k++){
                if(k==i || k==j) continue;
                if(v[i].second==v[j].second && v[j].second==v[k].second){
                    if(v[i].first+v[j].first+v[k].first== v[i].second){
                        cy;
                        return;
                    }
                }
                if(v[i].first==v[j].first && v[j].first==v[k].first){
                    if(v[i].second+v[j].second+v[k].second==v[i].first){ 
                        cy; 
                        return;
                    }
                }
                if(v[i].second==v[j].second){
                    if(v[i].first+v[j].first==v[k].first && v[i].second+v[k].second==v[k].first){
                        cy;
                        return;
                    }
                }
                if(v[i].first==v[j].first){
                    if(v[i].second+v[j].second==v[k].second && v[i].first+v[k].first==v[k].second){ 
                        cy; 
                        return;
                    }
                }
            }
        }
    }
    cn;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}

