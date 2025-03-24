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
//string s="abcdefghijklmnopqrstuvwxyz";
int ar[1001];
const ll mx= 1000;
vector<int> solve(const vector<int>& points, const vector<int>& queries) {
    int n = points.size();
    vector<int> left(n), right(n);

    // Preprocess: Calculate left and right counts
    left[0] = 0;
    right[n - 1] = 0;
    for (int i = 1; i < n; ++i) {
        left[i] = left[i - 1] + 1;
        right[n - i - 1] = right[n - i] + 1;
    }

    // Process queries efficiently
    vector<int> results(queries.size());
    for (int i = 0; i < queries.size(); ++i) {
        int k = queries[i];
        int count = 0;
        int j = 0;
        while (j < n && left[j] * right[j] <= k) {
            if (left[j] * right[j] == k) {
                count++;
            }
            j++;
        }
        results[i] = count;
    }

    return results;
}
void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i];
    }

    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    vector<int> result = solve(points, queries);

    for (int count : result) {
        cout << count << " ";
    }
    cout << endl;
}
int main(){
    fast;
    int t;
    cin>>t;
    while (t--){
        solve();
    }   
}