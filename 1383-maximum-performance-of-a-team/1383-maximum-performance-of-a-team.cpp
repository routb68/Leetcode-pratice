
class Solution {
public:
	int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) {
		const int mod = 1e9 + 7;
		vector<pair<int, int>> v;
		for (int i = 0; i < n; ++i) v.emplace_back(eff[i], speed[i]);
		sort(v.begin(), v.end());
		priority_queue<int, vector<int>, greater<int>> pq; // minheap
		long long currsum = 0;  // current sum of elements inside heap
		long long res=-1e8;
		for (int i = n - 1; i >= 0; --i) {
            while(pq.size()>k-1){
                currsum-=pq.top();
                pq.pop();
            }
            currsum+=v[i].second;
            pq.push(v[i].second);
            res=max(res,(currsum*v[i].first));
            
		}
		return res%mod;
	}
};