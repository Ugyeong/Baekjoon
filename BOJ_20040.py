import sys
input = sys.stdin.readline

def getParent(x):
    if parents[x] == x:
        return x
    else:
        p = getParent(parents[x])
        parents[x] = p
        return p

def unionParent(x1, x2, index):
    global cnt
    x1 = getParent(x1)
    x2 = getParent(x2)
    if x1!=x2:
        parents[max(x1,x2)] = min(x1,x2)
    elif cnt == 0:
        cnt = index

N, M = map(int, input().split())
cnt = 0
parents = [i for i in range(N)]
for i in range(M):
    a, b = map(int, input().split())
    unionParent(a, b, i+1)
    
print(cnt)
