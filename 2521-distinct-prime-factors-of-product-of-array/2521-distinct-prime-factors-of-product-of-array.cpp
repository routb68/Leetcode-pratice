class Solution {
public:
	int distinctPrimeFactors(vector<int> &nums) {
		unordered_set<int> us;
		for (int &n : nums) {
			int c = 2;
			while (n > 1) {
				if (n % c == 0) {
                    us.insert(c);
					n /= c;
				} else
					c++;
			}
		}
        return us.size();
	}
};