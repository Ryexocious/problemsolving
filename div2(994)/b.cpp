#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);

        // Initialize alternating values 0, 1, 2 in a cyclic pattern
        // We use modulo 3 for simplicity
        for (int i = 0; i < n; ++i) {
            a[i] = i % 3;  // Alternating values 0, 1, 2
        }

        // Handle the special friendship between x and y
        // Just ensure their values do not clash by checking their adjacent values
        if (y == x + 1 || (x == 1 && y == n)) {
            a[y - 1] = (a[x - 1] + 1) % 3;  // Make sure they have different values
        }
        
        // Output the result for the current test case
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
