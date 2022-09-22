class Solution:
    def interpret(self, cd: str) -> str:
        return cd.replace("()","o").replace("(al)","al")