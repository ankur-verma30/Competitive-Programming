#include <iostream>
#include <vector>

using namespace std;

void generatePattern(vector<int> &result, int N, int initial) {
    if (N <= 0) {
        result.push_back(N);
        if (N == 0) {
            generatePattern(result, N + 5, initial);
        }
    } else {
        result.push_back(N);
        generatePattern(result, N - 5, initial);
        if (N != initial) {
            result.push_back(N); // To avoid duplicating the middle value
        }
    }
}

vector<int> pattern(int N) {
    vector<int> result;
    generatePattern(result, N, N);
    return result;
}

int main() {
    int N1 = 20;
    vector<int> result1 = pattern(N1);
    cout << "Output 1: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    int N2 = 10;
    vector<int> result2 = pattern(N2);
    cout << "Output 2: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
