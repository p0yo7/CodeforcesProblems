#include <iostream>

using namespace std;
void p50a(int m, int n){
    if (((m * n) & 1) == 0){
        cout << (m*n)/2 << endl;
    }
    else {
        cout << ((m*n)-1)/2 << endl;
    }
}
int main()
{
    int m = 0;
    int n = 0;
    cin >> m >> n;
    p50a(m,n);

    return 0;
}