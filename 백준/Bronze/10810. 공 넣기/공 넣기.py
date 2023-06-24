N ,M = map(int, input().split(' '))

arr = [0 for i in range(N)]

for n in range(M):
    i, j, k = map(int, input().split())
    for a in range(i, j+1):
        arr[a - 1] = k

for i in range(N):
    print(arr[i], end=" ")    

