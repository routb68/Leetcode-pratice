class Solution {
public:
    int maxProfit(vector<int> &prices) {
    int b=INT_MIN, s=0, ps=0, pb;
    for (int price : prices) {
        pb = b;
        b = max(ps - price, b);
        ps = s;
        s = max(pb + price, s);
    }
    return s;
}
};