class Solution:
    def equationsPossible(self, equ: List[str]) -> bool:
        union= {}
        def find (x):
            if x not in union:
                return x
            else :
                return find(union[x])
        for i in equ:
            if i[1]=='=':
                x=find(i[0])
                y=find(i[-1])
                if x!=y:
                    union[y]=x
        for i in equ:
            if i[1]=='!' and find(i[0])== find(i[-1]):
                    return False
        return True
                