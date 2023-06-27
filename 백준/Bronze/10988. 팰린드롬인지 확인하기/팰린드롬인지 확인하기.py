word = input()

answer = 1

for i in range(len(word)):
    if word[(len(word) - 1) - i] != word[i]:
        answer = 0

print(answer)