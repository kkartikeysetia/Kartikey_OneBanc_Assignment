#include <iostream>
#include <vector>
#include <string>
using namespace std;

int levenshtein_distance(const string& str1, const string& str2);
int weighted_levenshtein_distance(const string& str1, const string& str2, int Ci, int Cd, int Cs);
string spell_checker(const vector<string>& dictionary, const string& input);

int main() {
    string str1, str2;
    int choice;

    cout << "Choose Operation:\n";
    cout << "1. Standard Levenshtein Distance\n";
    cout << "2. Weighted Levenshtein Distance\n";
    cout << "3. Spell Checker\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

 // Option 1: Standard edit distance
    if (choice == 1) {
        cout << "Enter first string: ";
        cin >> str1;
        cout << "Enter second string: ";
        cin >> str2;
        int result = levenshtein_distance(str1, str2);
        cout << "Standard Levenshtein Distance: " << result << endl;

 // Option 2: Weighted edit distance
    } else if (choice == 2) {
        int Ci, Cd, Cs;
        cout << "Enter first string: ";
        cin >> str1;
        cout << "Enter second string: ";
        cin >> str2;
        cout << "Enter Insertion Cost (Ci): ";
        cin >> Ci;
        cout << "Enter Deletion Cost (Cd): ";
        cin >> Cd;
        cout << "Enter Substitution Cost (Cs): ";
        cin >> Cs;
        int result = weighted_levenshtein_distance(str1, str2, Ci, Cd, Cs);
        cout << "Weighted Levenshtein Distance: " << result << endl;

 // Option 3: Spell checker using Levenshtein distance
    } else if (choice == 3) {
        int n;
        cout << "Enter number of dictionary words: ";
        cin >> n;
        vector<string> dict(n);
        cout << "Enter dictionary words:\n";
        for (int i = 0; i < n; ++i) {

            cin >> dict[i];
        }
        cout << "Enter word to check: ";
        cin >> str1;
        string result = spell_checker(dict, str1);
        cout << "Closest word in dictionary: " << result << endl;

    } else {
        cout << "Invalid choice.\n";
    }

    return 0;
}
