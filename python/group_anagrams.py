from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagramMap = defaultdict(list)

        for words in strs:
            sorted_word = ''.join(sorted(words))
            anagramMap[sorted_word].append(words) 
        
        return list(anagramMap.values())