// Problem: Solve the pattern problem.
// Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285196/0

class Solution {
  public:
    void printTriangle(int n) {
        for (int i = n; i >= 1; i--)
        {
            char ch = 'A';
            for (int j = 1; j <= i; j++)
            cout << ch++;
            cout << endl;
        }
    }
};