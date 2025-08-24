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
    vector<string>v(3);
    for(int i=0;i<3;i++){
        cin>>v[i];
    }
    for(int i=0;i<3;i++){
        ll co=0,co2=0,co3=0;
        for(int j=0;j<3;j++){
            if(v[i][j]=='+'){
                co++;
            }
            if(v[i][j]=='X'){
                co2++;
            }
            if(v[i][j]=='O'){
                co3++;
            }
        }
        if(co==3){
            cout<<'+'<<"\n";
            return;
        }
        if(co2==3){
            cout<<'X'<<"\n";
            return;
        }
        if(co3==3){
            cout<<'O'<<"\n";
            return;
        }
    }
    for(int i=0;i<3;i++){
        ll co=0,co2=0,co3=0;
        for(int j=0;j<3;j++){
            if(v[j][i]=='+'){
                co++;
            }
            if(v[j][i]=='X'){
                co2++;
            }
            if(v[j][i]=='O'){
                co3++;
            }
        }
        if(co==3){
            cout<<'+'<<"\n";
            return;
        }
        if(co2==3){
            cout<<'X'<<"\n";
            return;
        }
        if(co3==3){
            cout<<'O'<<"\n";
            return;
        }
    }
    ll co=0,co2=0,co3=0;
    for(int i=0;i<3;i++){
        if(v[i][i]=='+'){
            co++;
        }
        if(v[i][i]=='X'){
            co2++;
        }
        if(v[i][i]=='O'){
            co3++;
        }
    }
    if(co==3){
        cout<<'+'<<"\n";
        return;
    }
    if(co2==3){
        cout<<'X'<<"\n";
        return;
    }
    if(co3==3){
        cout<<'O'<<"\n";
        return;
    }
    co=0,co2=0,co3=0;
    for(int i=0;i<3;i++){
        if(v[i][2 - i]=='+'){
            co++;
        }
        if(v[i][2 - i]=='X'){
            co2++;
        }
        if(v[i][2 - i]=='O'){
            co3++;
        }
    }
    if(co==3){
        cout<<'+'<<"\n";
        return;
    }
    if(co2==3){
        cout<<'X'<<"\n";
        return;
    }
    if(co3==3){
        cout<<'O'<<"\n";
        return;
    }
    cout<<"DRAW\n";

}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}