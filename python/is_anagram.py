class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        charMap = {}

        for char1 in s:
            charMap[char1] = charMap.get(char1, 0) + 1
        for char2 in t:
            charMap[char2] = charMap.get(char2, 0) - 1

        for val in charMap.values():
            if val != 0:
                return False
        
        return True