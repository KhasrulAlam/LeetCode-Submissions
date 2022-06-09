class Solution(object):
    def longestCommonPrefix(self, strs):
        res=""
        for i in range(len(strs[0])):
            flg = True
            for Str in strs:    
                if len(Str)<=i or  Str[i] != strs[0][i]:
                    flg= False
                    break
            if flg:
                res+=strs[0][i]
            else:
                break
        return res
        