#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int x = 0; // Valor inicial de x
    cin >> n;  // Número de instrucciones
    
    for (int i = 0; i < n; ++i) {
        string operation;
        cin >> operation; // Lee la operación
        
        if (operation.find("++") != string::npos) {
            ++x; // Incrementa x si encuentra '++'
        } else if (operation.find("--") != string::npos) {
            --x; // Decrementa x si encuentra '--'
        }
    }
    
    cout << x << endl; // Muestra el valor final de x
    
    return 0;
}
