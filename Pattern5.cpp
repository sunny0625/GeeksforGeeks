// Problem: Solve the pattern problem.
// Link: https://practice.geeksforgeeks.org/problems/triangle-pattern/0

class Solution{
public:
	
	void printTriangle(int n) {
	    for (int i = n; i >= 1; i--)
	    {
	        for (int j = i; j >= 1; j--)
	        cout << "* ";
	        cout << endl;
	    }
	}
};