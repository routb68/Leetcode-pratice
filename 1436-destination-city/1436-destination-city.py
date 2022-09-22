class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        num_cnt = {}
        for p in paths:
            city1,city2=p
            num_cnt[city1] = num_cnt.get(city1,0)+1
            
            num_cnt[city2] = num_cnt.get(city2,0)
        for city in num_cnt:
            if num_cnt[city]==0:
                return city;