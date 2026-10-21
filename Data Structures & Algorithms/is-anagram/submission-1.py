class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        n = len(s)
        m = len(t)
        if(n != m):
            return False
        mp = {chr(i) : 0 for i in range(ord('a'), ord('z')+1)}
        for i in range(n):
            mp[s[i]] += 1
        for i in range(m):
            mp[t[i]] -= 1
        for i in mp:
            if mp[i]!= 0:
                return False
        return True