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