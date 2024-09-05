#include <iostream>

using namespace std;

int p231A(int a, int b, int c){
    return ((a+b+c) >= 2);
}

int main()
{
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int a = 0;
        int b = 0;
        int c = 0;
        cin >> a;
        cin >> b;
        cin >> c;
        sum += p231A(a,b,c);
    }
    cout << sum << endl;
    return 0;
}