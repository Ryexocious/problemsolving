#include<bits/stdc++.h>
using namespace std;

// Function to check if the table is valid
void check_validity(int a_points, int b_points, int c_points) {
    // There are 3 matches: A vs B, B vs C, and A vs C.
    // We will simulate all possible outcomes of these matches.
    
    // Simulate all possible results for the 3 matches
    // Match 1: A vs B
    // Match 2: B vs C
    // Match 3: A vs C
    
    // Points for wins, losses, and draws:
    // Win gives 3 points, draw gives 1 point, and loss gives 0 points.

    // Iterate over all possible combinations of outcomes
    for (int a_b = 0; a_b <= 2; ++a_b) {   // 0 = A wins, 1 = B wins, 2 = Draw
        for (int b_c = 0; b_c <= 2; ++b_c) { // 0 = B wins, 1 = C wins, 2 = Draw
            for (int a_c = 0; a_c <= 2; ++a_c) { // 0 = A wins, 1 = C wins, 2 = Draw
                // Points for each team
                int a_total = 0, b_total = 0, c_total = 0;
                
                // Process result of A vs B
                if (a_b == 0) a_total += 3; // A wins
                else if (a_b == 1) b_total += 3; // B wins
                else { a_total += 1; b_total += 1; } // Draw
                
                // Process result of B vs C
                if (b_c == 0) b_total += 3; // B wins
                else if (b_c == 1) c_total += 3; // C wins
                else { b_total += 1; c_total += 1; } // Draw
                
                // Process result of A vs C
                if (a_c == 0) a_total += 3; // A wins
                else if (a_c == 1) c_total += 3; // C wins
                else { a_total += 1; c_total += 1; } // Draw
                
                // Check if the calculated points match the given points
                if (a_total == a_points && b_total == b_points && c_total == c_points) {
                    cout << "Valid Table" << endl;
                    return;
                }
            }
        }
    }

    // If no combination of results matches the given points, the table is invalid
    cout << "Invalid Table" << endl;
}

int main() {
    // Points for Teams A, B, and C
    int t;
    cin>>t;
    while(t--){
    int a_points, b_points, c_points;
    cin >> a_points >> b_points >> c_points;
    
    // Check if the table is valid
    check_validity(a_points, b_points, c_points);
    }
    return 0;
}
