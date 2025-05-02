#include <vector>
#include <string>
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Weighted Levenshtein Distance Function
// Cost of insertion = Ci, deletion = Cd, substitution = Cs
int weighted_levenshtein_distance(const string& str1, const string& str2, int Ci, int Cd, int Cs) {
    int n = str1.length();
    int m = str2.length();

    if (n == 0) return m * Ci;
    if (m == 0) return n * Cd;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; ++i) dp[i][0] = i * Cd;
    for (int j = 0; j <= m; ++j) dp[0][j] = j * Ci;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1]; // same letter toh no cost 
            else
                dp[i][j] = min({dp[i - 1][j] + Cd, // delete
                                dp[i][j - 1] + Ci, // insert
                                dp[i - 1][j - 1] + Cs}); // substitute
        }
    }

    return dp[n][m];
}
int levenshtein_distance(const std::string& str1, const std::string& str2);

string spell_checker(const vector<string>& dictionary, const string& input) {
    int minimum_distance = INT_MAX;
    string closest_word;

    for (const auto& word : dictionary) {
        int dist = levenshtein_distance(input, word);
        if (dist < minimum_distance) {
            minimum_distance = dist;
            closest_word = word;
        }
    }
    return closest_word;
}
