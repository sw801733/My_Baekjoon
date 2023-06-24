N, M = map(int, input().split(' '))

arr = [i + 1 for i in range(N)]

for n in range(M):
    i, j = map(int, input().split(' '))
    h = (j - i + 1) // 2
    for a in range(h):
        arr[i + a - 1], arr[j - a - 1] = arr[j - a - 1], arr[i + a - 1]

for i in range(N):
    print(arr[i], end=" ") 
    