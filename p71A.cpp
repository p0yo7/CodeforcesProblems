#include <iostream>

using namespace std;

void p71A(string word) {
    string res;
    res += word[0] + to_string(word.size()-2) + word[word.size()-1];
    cout << res << endl;
}

int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        if (word.size() <= 10){
            cout << word << endl;
        }
        else {
            p71A(word);
        }
    }
    return 0;
}