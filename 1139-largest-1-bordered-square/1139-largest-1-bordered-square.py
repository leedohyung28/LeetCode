class Solution(object):
    def largest1BorderedSquare(self, grid):
        global H
        global W
        
        H = len(grid)
        W = len(grid[0])
        
        op = 0
        global v
        v = [[False] * W for _ in range(H)]
        
        for y in range(H) :
            for x in range(W) :
                if grid[y][x] == 1 and not v[y][x] :
                    op = max(checkSquare(x,y,grid), op)
        
        return op
    
def checkSquare(x,y,grid) :
    i = 0
    rt = 0
    while i+y+1 < H and i+x+1 < W :
        i += 1
        end = False
        for k in range(i) :
            if grid[y][x+k] == 0 or grid[y+k][x+i] == 0 or grid[y+i][x+i-k] == 0 or grid[y+i-k][x] == 0 :
                end = True
                break
        if not end :
            rt = i
    return (rt+1)**2