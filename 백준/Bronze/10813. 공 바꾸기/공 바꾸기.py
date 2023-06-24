N ,M = map(int, input().split(' '))

arr = [i + 1 for i in range(N)]

for n in range(M):
    i, j = map(int, input().split())
    temp = arr[i - 1]
    arr[i - 1] = arr[j - 1]
    arr[j - 1] = temp

for i in range(N):
    print(arr[i], end=" ")    

