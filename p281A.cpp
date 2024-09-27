/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;


string p281A(string word){
    word[0] = toupper(word[0]);
    return word;
}
int main()
{
    string word;
    cin >> word;
    cout << p281A(word) << endl;
    return 0;
}