#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        string result;
        stack<char> stk;

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == '/') {
                stk.push('/');
            }
            else if ((path[i] >= 65 && path[i] <= 90) || (path[i] >= 97 && path[i] <= 122)) {
                stk.push(path[i]);
            }
            else if (i < path.length() - 1 && path[i] == '/' && path[i + 1] == '/') {
                stk.push('/');
            }
        }

        while (!stk.empty()) {
            result += stk.top();
            stk.pop();
        }

        reverse(result.begin(), result.end());

        return result.empty() ? "/" : result;
    }
};

int main() {
    Solution solution;
    cout << solution.simplifyPath("/home/") << endl;        // Output: "/home"
    cout << solution.simplifyPath("/../") << endl;          // Output: "/"
    cout << solution.simplifyPath("/home//foo/") << endl;   // Output: "/home/foo"

    return 0;
}
