import sys
N = int( sys.stdin.readline().rstrip() )

num = 0

for i in range(N):
    a = int( sys.stdin.readline().rstrip() )
    num += a - 1
print(num + 1)
    