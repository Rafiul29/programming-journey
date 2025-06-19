#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int numbers[] = {1, 2, 4, 5, 6, 7};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Push all numbers onto the stack
    for (int i = 0; i < n; ++i) {
        s.push(numbers[i]);
    }

    // Print the numbers in reversed order
    cout << "Reversed numbers: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
