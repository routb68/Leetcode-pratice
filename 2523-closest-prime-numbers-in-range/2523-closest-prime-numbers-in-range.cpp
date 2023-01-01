class Solution {
public:
	bool isPrime(int n) {
		if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
	}
	vector<int> closestPrimes(int left, int right) {
		vector<int> v;
		for (int i = left; i <= right; ++i) {
            if(i==2 or i==3) v.push_back(i);
			if (i % 2 != 0 and i % 3 != 0 and i % 5 != 0)
				if (isPrime(i)) v.push_back(i);
		}
		if (v.size() < 2) return {-1, -1};
		int x = INT_MAX;
		int ridx = 0;
		for (int i = 0; i < v.size() - 1; ++i) {
			if (x > v[i + 1] - v[i]) {
				x = v[i + 1] - v[i];
				ridx = i;
			}
		}
		return {v[ridx], v[ridx + 1]};
	}
};