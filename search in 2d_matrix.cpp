#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n = matrix.size();
         int m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};

int main() {
    Solution solution;
    int n, m, target;

    // Taking matrix dimensions from the user
    cout << "Enter the number of rows (n): ";
    cin >> n;
    cout << "Enter the number of columns (m): ";
    cin >> m;

    // Initializing a 2D vector to store matrix elements
    vector<vector<int>> matrix(n, vector<int>(m));

    // Taking matrix elements input from the user
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Taking target element input from the user
    cout << "Enter the target element to search for: ";
    cin >> target;

    // Searching for the target in the matrix
    bool found = solution.searchMatrix(matrix, target);
    cout << (found ? "Target found in the matrix." : "Target not found in the matrix.") << endl;

    return 0;
}