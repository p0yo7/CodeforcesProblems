#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void p339A(string opp) {
    vector<int> nums; // Use vector of integers to store the numbers

    // Extract numbers from the input string
    for (char ch : opp) {
        if (ch != '+') {
            nums.push_back(ch - '0'); // Convert char to int
        }
    }

    // Sort the numbers in non-decreasing order
    sort(nums.begin(), nums.end());

    // Construct the result string
    string res;
    for (size_t i = 0; i < nums.size(); i++) {
        if (i > 0) {
            res += '+'; // Add '+' before every number except the first one
        }
        res += to_string(nums[i]); // Convert int back to string
    }

    cout << res << endl; // Output the result
}

int main() {
    string word;
    cin >> word;
    p339A(word);
    return 0;
}
