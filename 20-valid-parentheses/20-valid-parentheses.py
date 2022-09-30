class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        dict ={'}':'{',']':'[',')':'('}
        for x in s:
            if x in dict.values():
                st.append(x)
            elif x in dict.keys():
                if st==[] or dict[x]!=st.pop():
                    return False;
        return st==[];