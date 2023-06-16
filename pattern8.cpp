// Problem: Pattern 8 in Striver's sheet
// Link: https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/0

class Solution{
    public:
    void printTriangle(int n){
         for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
            cout << " ";

        // stars
            for (int j = 0; j < 2 * n - (2 * i + 1); j++)
                cout << "*";
                
        // space
        for (int j = 0; j < i; j++)
            cout << " ";

        cout << endl;
    }
    }
};