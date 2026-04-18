class Solution {
  public:
    bool isPower(int x, int y) {
    if (y <= 0) return false;
    double val = log(y) / log(x);
    return (fabs(val - round(val)) < 1e-10);
}
};