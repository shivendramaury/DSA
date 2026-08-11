class Solution {
  public:
    void multiplie(vector<int>& arr, int &size, int multiplier){
        int carry = 0;
        
        for(int i=0; i<size; i++){
            int res = multiplier * arr[i];
            
            res = res + carry;
            
            arr[i] = res%10;
            
            carry = res/10;
        }
        
        while(carry>0){
            arr[size] = carry%10;
            size++;
            carry /= 10;
        }
    }
    vector<int> factorial(int n) {
        vector<int> arr(10000, 0);
        
        arr[0] = 1;
        
        int size = 1;
        
        for(int multiplier = 2; multiplier<=n; multiplier++){
            multiplie(arr, size, multiplier);
        }
        
        vector<int> result;
        
        for(int i=0; i<size; i++){
            result.push_back(arr[i]);
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};