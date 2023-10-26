class Solution {
public:
	vector<int> findRightInterval(vector<vector<int>> &inter) {
		vector<pair<int, int>> v;
		for (int i = 0; i < inter.size(); ++i) {
			v.push_back(make_pair(inter[i][0], i));
		}
		sort(begin(v), end(v));
		vector<int> ans(inter.size());
		for (int i = 0; i < inter.size(); ++i) {
			int res = -1;
			int lo = 0, hi = inter.size() - 1;
			while (lo <= hi) {
				int mid = lo + (hi - lo) / 2;
                if(v[mid].first>=inter[i][1]){
                    res = v[mid].second;
                    hi = mid-1;
                }else{
                    lo = mid+1;
                }
			}
            ans[i]=res;
		}
        return ans;
	}
};