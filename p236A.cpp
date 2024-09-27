/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unordered_set>
using namespace std;


void p236A(string word){
    unordered_set<char> set;
    for (char i : word){
        set.insert(i);
    }
    if (set.size() & 1){
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    }
}
int main()
{
    string word;
    cin >> word;
    p236A(word);
    return 0;
}