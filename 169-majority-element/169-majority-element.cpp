class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n=v.size();
        int i, cnt = 0, pre = -1;
	for (i = 0; i < n; ++i) {
		if (cnt == 0) {
			cnt = 1;
			pre = v[i];
		} else {
			if (v[i] == pre) {
				++cnt;
			} else {
				--cnt;
			}
		}
	}
	cnt = 0;
	for (i = 0; i < n; ++i) {
		if (pre == v[i]) {
			cnt++;
		}
	}
        return pre;
    }
};