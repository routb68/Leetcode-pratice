class Solution {
public:
	map<pair<int, int>, bool> mp;
	bool com(string &s1, string &s2, string &s3, int m, int n, int x) {
		if (mp.find(make_pair(m, n)) != mp.end()) {
			return mp[make_pair(m, n)];
		}
		if (m == s1.size() and n == s2.size()) {
			return mp[make_pair(m, n)] = (x == s3.size());
		}
		if (m == s1.size()) {
			if (s3[x] != s2[n]) return mp[make_pair(m, n)] = false;
			return mp[make_pair(m, n)] = com(s1, s2, s3, m, n + 1, x + 1);
		}
		if (n == s2.size()) {
			if (s3[x] != s1[m]) return mp[make_pair(m, n)] = false;
			return mp[make_pair(m, n)] = com(s1, s2, s3, m + 1, n, x + 1);
		}
		if (s1[m] == s2[n] and s1[m] == s3[x]) {
			return mp[make_pair(m, n)] = (com(s1, s2, s3, m + 1, n, x + 1) or
										  com(s1, s2, s3, m, n + 1, x + 1));
		}
		if (s1[m] == s3[x])
			return mp[make_pair(m, n)] = com(s1, s2, s3, m + 1, n, x + 1);
		if (s2[n] == s3[x])
			return mp[make_pair(m, n)] = com(s1, s2, s3, m, n + 1, x + 1);
		return mp[make_pair(m, n)] = false;
	}
	bool isInterleave(string s1, string s2, string s3) {
		if (s3.size() != s1.size() + s2.size()) return false;
		return com(s1, s2, s3, 0, 0, 0);
	}
};