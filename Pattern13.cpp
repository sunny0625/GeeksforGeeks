// Problem: Solving the pattern problem.
// Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718712/0

class Solution {
  public:
    void printTriangle(int n) {
        int count = 0;
       for (int i = 1; i <= n; i++)
       {
           for (int j = 1; j <= i; j++)
           cout << ++count << " ";
           cout << endl;
       }
    }
};