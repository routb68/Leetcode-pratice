class Solution {
public:
	long long minimumCost(string s) {
		long long pre[s.length()], suf[s.length()];
		for (int i = 0; i < s.length(); ++i) {
			pre[i] = 0;
			if (i > 0 and s[i] != s[i - 1])
				pre[i] = i ;
			if (i != 0) pre[i] += pre[i - 1];
			// cout << pre[i] << " ";
		}
		// cout << endl;
		for (int i = s.length() - 1; i >= 0; --i) {
			suf[i] = 0;
			if (i != s.length() - 1 and s[i] != s[i + 1])
				suf[i] = s.length() - i-1;
            if(i!=s.length()-1)suf[i]+=suf[i+1];
		}
        // for(int i=0;i<s.length();++i){
        //     cout << suf[i] << " ";
        // }
        // cout<<endl;
		long long ans = 1e18;
		for (int i = 0; i < s.length(); ++i) {
			long long x = pre[i] + suf[i];
			ans = min(ans, x);
		}
		return ans;
	}
};