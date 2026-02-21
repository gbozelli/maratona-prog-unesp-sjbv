class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        again = False
        end = 0
        start = -1
        for i in range(1, n+1):
            if s[-i] != " " and again == False:
                end = n-i
                again = True
            if s[-i] == " " and again:
                start = n-i
                break
        return end-start