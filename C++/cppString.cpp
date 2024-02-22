#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strings(n);

    cout << "Enter " << n << " strings:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    // Sorting the array of strings lexicographically using Bubble Sort
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strings[j] > strings[j + 1]) {
                // Swap the strings
                string temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    cout << "\nStrings arranged lexicographically:" << endl;
    for (auto element : strings) {
        cout << element << endl;
    }

    return 0;
}
