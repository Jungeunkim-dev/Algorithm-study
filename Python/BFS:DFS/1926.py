from collections import deque

n,m=map(int, input().split())

board = [list(map(int, input().split())) for _ in range(n)]
visited = [[False for i in range(m)] for j in range(n)]

dx = [0,0,-1,1]
dy = [1,-1,0,0]

pictureNum=0
maxSize=0

def bfs(visited, board, x,y):
    queue = deque()
    queue.append((x,y))
    visited[x][y]=True
    pictureSize=1

    while queue:
        x,y = queue.popleft()

        for i in range(4):
            nx = x+dx[i]
            ny = y+dy[i]


            if nx<0 or ny<0 or nx>=n or ny>=m or board[nx][ny]==0:
                continue
            if visited[nx][ny]==False and board[nx][ny]==1:
                visited[nx][ny]=True
                pictureSize+=1
                queue.append((nx,ny))
    return pictureSize

for i in range(n):
    for j in range(m):
        if visited[i][j]==False and board[i][j]==1:
            pictureNum+=1
            maxSize=max(maxSize, bfs(visited, board, i,j))


print(pictureNum)
print(maxSize)
