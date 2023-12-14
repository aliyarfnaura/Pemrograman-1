def reverse (angka) :
    kebalikan = 0
    while int(angka) != 0 :
        sisa = int(angka) % 10
        kebalikan = kebalikan * 10 + sisa
        angka = int(angka) / 10
    return kebalikan

A, B = input().split()
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))