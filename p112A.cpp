#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to compare two strings lexicographically ignoring case
int p112A(string A, string B) {
    // Convert both strings to lowercase for comparison
    for (size_t i = 0; i < A.size(); ++i) {
        A[i] = tolower(static_cast<unsigned char>(A[i]));
    }
    for (size_t i = 0; i < B.size(); ++i) {
        B[i] = tolower(static_cast<unsigned char>(B[i]));
    }

    // Compare the two strings
    if (A < B) {
        return -1; // A is less than B
    } else if (A > B) {
        return 1;  // A is greater than B
    } else {
        return 0;  // A is equal to B
    }
}

int main() {
    string A, B;
    cin >> A;
    cin >> B;

    cout << p112A(A, B) << endl;
    
    return 0;
}
