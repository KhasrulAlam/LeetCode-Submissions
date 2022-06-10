class Solution(object):
    def longestCommonPrefix(self, strs):
        
        shortest= min(strs,key=len)
        
        for i,ch in enumerate(shortest):
            for Str in strs:
                if Str[i]!=ch :
                    return Str[:i]
        
        return shortest
    