#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

 void markrow(vector<vector<int>>& matrix ,int i,int n)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]!=0)
                {
                    matrix[i][j]=-1;
                }
            }
        }
        void markcolumn(vector<vector<int>>& matrix ,int j,int m)
        {
            for(int i=0;i<m;i++)
            {
                if(matrix[i][j]!=0)
                {
                    matrix[i][j]=-1;
                }
            }
        }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();              
        int n = matrix[0].size(); 
       if(matrix.empty() || matrix[0].empty()) {
         return;
        }

        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    markrow(matrix,i,n);
                    markcolumn(matrix,j,m);
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-1){
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
