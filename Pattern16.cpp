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