#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // First, transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Then, reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
    cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original matrix:" << endl;
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "Rotated matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
