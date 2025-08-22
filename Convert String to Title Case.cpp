#include <bits/stdc++.h>
using namespace std;

bool isAcronym(const string& word) {
    for (char ch : word) {
        if (!isupper(ch)) return false;
    }
    return true;
}

string toTitleCase(const string& s) {
    stringstream ss(s);
    string word, result = "";

    while (ss >> word) {
        if (isAcronym(word)) {
            result += word;
        } else {
            word[0] = toupper(word[0]);
            for (int i = 1; i < word.size(); ++i)
                word[i] = tolower(word[i]);
            result += word;
        }
        result += " ";
    }

    // Remove the last space
    if (!result.empty()) result.pop_back();
    return result;
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore leftover newline

    while (T--) {
        string S;
        getline(cin, S);
        cout << toTitleCase(S) << endl;
    }
}
