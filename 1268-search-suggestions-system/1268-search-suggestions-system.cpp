class Solution {
public:
	struct TrieNode {
		TrieNode *child[26];
		bool end;
		TrieNode() {
			end = false;
			for (int i = 0; i < 26; ++i) {
				child[i] = NULL;
			}
		}
	};
	void insert(string &s) {
		TrieNode *curr = root;
		for (char &x : s) {
			int idx = x - 'a';
			if (!curr->child[idx]) {
				curr->child[idx] = new TrieNode();
			}
			curr = curr->child[idx];
		}
		curr->end = true;
	}
	void com(string &se) {
		TrieNode *curr = root;
		string s = "";
		for (char &x : se) {
			int idx = x - 'a';
			if (curr->child[idx] != NULL) {
				s += x;
				ans.clear();
				add(curr->child[idx], s);
				res.push_back(ans);
				curr = curr->child[idx];
			} else {
				return;
			}
		}
	}
	void add(TrieNode *n, string &s) {
		if (ans.size() == 3) return;
		if (n->end == true) ans.push_back(s);
		for (int i = 0; i < 26; ++i) {
			if (n->child[i] != NULL) {
				s += char('a' + i);
				add(n->child[i], s);
				s.pop_back();
			}
		}
	}

	TrieNode *root;
	vector<vector<string>> res;
	vector<string> ans;
	vector<vector<string>> suggestedProducts(vector<string> &p, string se) {
		root = new TrieNode();
		for (string &x : p) {
			insert(x);
		}
		com(se);
		if (res.size() < se.length()) {
			while (res.size() < se.size()) {
				res.push_back({});
			}
		}
		return res;
	}
};