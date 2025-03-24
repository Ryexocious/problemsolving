#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec;
typedef map<string, int> mp;
#define cy cout<<"YES"<<endl;
#define cn cout<<"NO"<<endl;
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mfor(i, n) for(int i=0; i<(n); i++)
#define rfor(i, n) for(int i=(n)-1; i>=0; i--)
void solve() {
    int n;
    cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for(int i = n - 1; i >= 0; --i) {
        int col = 0;
        for (int j = 0; j < v[i].length(); ++j) {
            if (v[i][j] == '#') {
                col = j + 1;
                break;
            }
        }
        cout << col << " ";
    }
    cout << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
