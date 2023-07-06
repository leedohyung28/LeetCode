class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """
        best = 1
        for i in n :
            if i == '9' :
                return 9
            i = int(i)
            if i > best :
                best = i
        return best