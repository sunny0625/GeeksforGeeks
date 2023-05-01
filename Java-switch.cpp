class Solution{
    static double switchCase(int choice, List<Double> arr){
        double x = 0.0;
        double y = 0.0;
        switch(choice)
        {
            case 1:
                // cout << 3.14 * float(arr) * float(arr);
                x = Math.PI * arr.get(0) * arr.get(0);
                break;
            case 2:
                // cout << arr * arr;
                y = arr.get(0) * arr.get(1);
                break;
        }
        if(choice == 1)
            return x;
        else
            return y;
    }
}