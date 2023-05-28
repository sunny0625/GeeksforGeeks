// Problem: Solve the pattern problem.
// Link: https://practice.geeksforgeeks.org/problems/triangle-number-1661489840/0

class Solution{
public:
	
	void printTriangle(int n) {
	    for (int i = n; i >= 1; i--)
	    {
	        for (int j = 1; j <= i; j++)
	        cout << j << " ";
	        cout << endl;
	    }
	}
};