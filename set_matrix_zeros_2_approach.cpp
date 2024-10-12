#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();              
        int n = matrix[0].size(); 

       vector<int> row(m, 0);
       vector<int> col(n, 0);
       if(matrix.empty() || matrix[0].empty()) {
         return;
        }

        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                   row[i]=1;
                   col[j]=1;
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(row[i]==1||col[j]==1){
                    matrix[i][j]=0;
                }            
                
            }
        }
        
    }
};

int main() {
    Solution solution;  // Create an instance of the Solution class

    vector<vector<int>> matrix = {  // Define a matrix
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    solution.setZeroes(matrix);  // Call the setZeroes function to modify the matrix

    // Print the modified matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;  // Indicate that the program has terminated successfully
}
