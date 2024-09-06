#include <iostream>
#include <vector>

using namespace std;

int p158A(int min, int val){
    return val >= min && val > 0;
}

int main()
{
    int passed = 0;
    int n, k;
    cin >> n >> k;

    vector<int> grades(n);

    for (int i = 0; i < n; i++){
        cin >> grades[i];
    }

    int borderline = grades[k-1];

    for (int i = 0; i < n; i++){
        passed += p158A(borderline, grades[i]);
    }

    cout << passed << endl;
    return 0;
}
