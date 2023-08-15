
while(1) :
    a, b, c = input().split()

    member = None
    if (a == '#' and b == '0' and c == '0'):
        break
    
    if (int(b) > 17 or int(c) >= 80) :
        member = 'Senior'
        print(a + " " + member)
    else :
        member = 'Junior'
        print(a + " " + member)
    