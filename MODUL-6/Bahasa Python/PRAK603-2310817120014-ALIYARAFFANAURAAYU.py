b1, b2 = map(int, input().split())
i1 = list(map(int, input().split()))
i2 = list(map(int, input().split()))
a1 = [] ; a2 = []
if (b1 != b2) :
    print("\nJumlah tidak sama")
else :
    print(" ")
    for x in range(0, b1) :
        a1.append(i1[x])
    for x in range(0, b2) :
        a2.append(i2[x])
    for x in range(0, b1) :
        print(a1[x] * a2[x], end=' ')