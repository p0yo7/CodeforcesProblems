/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void p263A(vector<vector<int>> matrix) {
    int pos_i = 0;
    int pos_j = 0;

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }
    
    cout << (abs(pos_j - 2) + abs(pos_i - 2)) << endl;
}

int main() {
    vector<vector<int>> matrix(5, vector<int>(5));  

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }

    p263A(matrix);

    return 0;
}