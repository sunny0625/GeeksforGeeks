// Problem: For Loop- primeCheck - C++
// Link: https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/0

void isPrime(int n) {
    
    if(n ==1){
        cout << "No";
    }
    else {
        int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
    if(n %i ==0){
        count = 1;
        break;
    }

    }
    if (count == 0){
        cout << "Yes";
    }
    else if(count != 0){
      cout << "No";  
    }
    }
cout << endl;
}