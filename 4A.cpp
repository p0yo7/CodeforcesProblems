#include <iostream>

using namespace std;

void Watermelon(int n) {
    // Verificar si el número es par y mayor o igual a 4
    if (n >= 4 && n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int w;
    cin >> w; // Leer el peso de la sandía
    Watermelon(w);
    return 0;
}
