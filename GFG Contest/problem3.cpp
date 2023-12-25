#include<bits/stdc++.h>

using namespace std;

int main() {
    // Input detective positions
    int X1, X2, X3;
    std::cout << "Enter detective positions (X1 X2 X3): ";
    std::cin >> X1 >> X2 >> X3;

    // Calculate minimum total distance
    int minDistance;
    if ((X2 <= X1 && X1 <= X3) || (X3 <= X1 && X1 <= X2)) {
        // X1 is between X2 and X3 or vice versa
        minDistance = std::abs(X2 - X3);
    } else if ((X1 <= X2 && X2 <= X3) || (X3 <= X2 && X2 <= X1)) {
        // X2 is between X1 and X3 or vice versa
        minDistance = std::abs(X1 - X3);
    } else {
        // X3 is between X1 and X2 or vice versa
        minDistance = std::abs(X1 - X2);
    }

    std::cout << "Minimum total distance: " << minDistance << std::endl;

    return 0;
}