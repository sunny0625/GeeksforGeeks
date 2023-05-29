// Problem: Solve the pattern problem.
// Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1662285334/0

class Solution {
  public:
    void printTriangle(int n) {
        char ch = 'A';
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            cout << ch;
            ch++;
            cout << endl;
        }
    }
};