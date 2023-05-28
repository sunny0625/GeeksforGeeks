// Problem: if-else condition.
// Link: https://practice.geeksforgeeks.org/problems/java-if-else-decision-making0924/0

class Solution {
  public:
    string compareNM(int n, int m){
        if(n < m)
            cout << "lesser";
        else if(n > m)
            cout << "greater";
        else
            cout << "equal";
    }
};