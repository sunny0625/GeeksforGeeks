// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        
        if(str =="Integer")
        return sizeof(int);
        if(str =="Character")
        return sizeof(char);
            else  if(str =="Long")
        return sizeof(long);
           else   if(str =="Float")
        return sizeof(float);
           else   if(str =="Double")
        return sizeof(double);
    }
};