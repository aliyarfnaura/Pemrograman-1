k1 = input()
k2 = input()
i1 = len(k1)
i2 = len(k2)
b = 0
p = 0

if i1 != i2:
    print("\nPanjang kalimat berbeda, pesan palsu")
else:
    for n in range(i1):
        if k1[n] == k2[n]:
            if k1[n] == ' ':
                print(" ", end="")
            else:
                print("*", end="")
                b += 1
        else:
            print("#", end="")
            p += 1

    print("\n* =", b)
    print("# =", p)

    if b >= p:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")