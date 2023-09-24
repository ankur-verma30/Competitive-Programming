#include <iostream>
using namespace std;

int calculateTime(int length, int speed) {
    return (length + speed - 1) / speed;  // Calculate time rounding up
}

int longestWaitingTime(int l, int v1, int v2) {
    int timeTortoise = calculateTime(l, v1);
    int timeHare = calculateTime(l, v2);
    
    if (timeHare < timeTortoise) {
        return timeTortoise - timeHare - 1;
    } else {
        return -1;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t!=0) {
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        
        int result = longestWaitingTime(l, v1, v2);
        cout << result << endl;
    }

    return 0;
}
