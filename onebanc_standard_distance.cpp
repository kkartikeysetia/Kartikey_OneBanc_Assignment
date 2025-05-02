#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Standard Levenshtein Distance function (all costs = 1)
int levenshtein_distance(const string& str1, const string& str2) {
    int n = str1.length();
    int m = str2.length();

    if (n == 0) return m;
    if (m == 0) return n;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= n; ++i) dp[i][0] = i;
    for (int j = 0; j <= m; ++j) dp[0][j] = j;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1]; // same character no operation 
            else
                dp[i][j] = min({dp[i - 1][j] + 1, // delete 
                                dp[i][j - 1] + 1,  // insert
                                dp[i - 1][j - 1] + 1}  // substitute
                );
        }
    }
    return dp[n][m];
}
