class Solution {
public:
	bool go(vector<int> &mt) {
		int n = 1 << mt.size();
		for (int i = 0; i <= n; ++i) {
			int a = 0, b = 0;
			for (int j = 0; j < mt.size(); ++j) {
				if (i & (1 << j)) {
					a += mt[j];
				} else {
					b += mt[j];
				}
			}
			if (a == b) {
				return true;
			}
		}
		return false;
	}
	bool makesquare(vector<int> &mt) {
		int n = 1 << mt.size();
		vector<int> v1, v2;
		for (int i = 0; i <= n; ++i) {
			int a = 0, b = 0;
			for (int j = 0; j < mt.size(); ++j) {
				if (i & (1 << j)) {
					v1.push_back(mt[j]);
					a += mt[j];
				} else {
					v2.push_back(mt[j]);
					b += mt[j];
				}
			}
			if (a == b) {
				bool flag1 = go(v1), flag2 = go(v2);
				if (flag1 and (flag1 == flag2)) return true;
			}
            v1.clear();
            v2.clear();
		}
		return false;
	}
};