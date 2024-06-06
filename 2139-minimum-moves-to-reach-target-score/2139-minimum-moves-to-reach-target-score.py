class Solution(object):
    def minMoves(self, target, maxDoubles):
        
        answer = -1
        while target :
            answer += 1
            if maxDoubles and not target % 2 :
                target //= 2
                maxDoubles -= 1
            elif not maxDoubles :
                answer += target - 1
                break
            else :
                target -= 1
                
        return answer