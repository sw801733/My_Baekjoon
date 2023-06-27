N = int(input())

line_N = 2 * N - 1

arr = [0 for i in range(line_N)]

arr[line_N // 2] = 1
middle = line_N // 2

for i in range(line_N):
    if (i < line_N // 2):
        
        for j in range(middle + i + 1):
            if arr[j] == 0:
                print(" ", end="")
            else :
                print("*", end="")
        print()
        
        arr[middle - (i + 1)] = 1
        arr[middle + (i + 1)] = 1
            
    else :
        for j in range((line_N - 1) - (i - middle) + 1):
            if arr[j] == 0:
                print(" ", end="")
            else :
                print("*", end="")
        print()
        arr[(line_N - 1) - (i - middle)] = 0
        arr[(i - middle)] = 0
        
