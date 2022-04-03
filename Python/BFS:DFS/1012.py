from collections import deque

t = int(input())

dx=[0,0,-1,1]
dy=[1,-1,0,0]


def bfs(visited, board, xx,yy, n, m):

    queue = deque()
    queue.append((xx,yy))
    visited[xx][yy]=True

    while queue:
        x,y=queue.popleft()

        for i in range(4):
            nx=x+dx[i]
            ny=y+dy[i]

            if nx<0 or ny<0 or nx>=n or ny>=m:
                continue
            if visited[nx][ny]==True or board[nx][ny]==0:
                continue
            if visited[nx][ny]==False and board[nx][ny]==1:
                visited[nx][ny]=True
                queue.append((nx,ny))


for k in range(t):
    m,n,k = map(int, input().split())
    boardCount=0

    board = [[0 for i in range(n)] for j in range(m)]
    visited = [[False for i in range(n)] for j in range(m)]

    for i in range(k):
        x,y=map(int, input().split())
        board[x][y]=1

    for i in range(m):
        for j in range(n):
            if visited[i][j]==False and board[i][j]==1:
                boardCount+=1
                bfs(visited, board, i,j, m,n)

    print(boardCount)
