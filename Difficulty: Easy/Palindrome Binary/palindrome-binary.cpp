class Solution {
  public:
    string Binary(int x){
        string binary = "";
        
        while(x>0){
            binary = char((x%2)+'0') + binary;
            x/=2;
        }
        return binary;
    }
    bool isBinaryPalindrome(int n) {
        string binary = Binary(n);
        int m=binary.size();
        
        int start = 0, end=m-1;
        
        while(start<=end){
            if(binary[start] != binary[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};