class Solution {
  public:
    int toh(int n, int sour, int help, int dist){
        int count=0;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        count = toh(n-1, sour, help, dist);
        count += 1;
        count += toh(n-1, help, dist, sour);
        return count;
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        return toh(n, 0, aux, n);
        
    }
};