L = int(input())

str = input()

answer = 0
b = 1

for i in str:
    answer += (ord(i) - ord('a') + 1) * b
    b *= 31

print(answer)
    
