while(True):
    words = input().split()
    if words == ['*']:
        break
    act=0
    c = words[0][0].lower()
    for i in range(len(words)):
        if(words[i][0].lower() != c):
            print("N")
            act = 1
            break
    if act == 0:
        print("Y")