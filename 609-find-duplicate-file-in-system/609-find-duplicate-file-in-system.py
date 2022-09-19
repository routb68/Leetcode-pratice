class Solution:
    def findDuplicate(self, paths: List[str]) -> List[List[str]]:
        files = defaultdict(list)
        
        for p in paths:
            directory = p.split(' ')[0]
            for file in p.split(' ')[1:]:
                start, end = file.find('('), file.find(')')
                content = file[start+1:end]
                
                files[content].append(f'{directory}/{file[:start]}')
                
        return [val for val in files.values() if len(val) > 1]