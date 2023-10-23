class Solution {
public:
    char nextGreatestLetter(vector<char>& ltrs, char target) {
        int ans =0;
        int lo = 0,hi= ltrs.size()-1;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(ltrs[mid]>target){
                ans = mid;
                hi = mid -1;
            }else{
                lo = mid +1;
            }
        }
        return ltrs[ans];
    }
};