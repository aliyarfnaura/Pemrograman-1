Kolom = int(input())
Isi = list(map(int, input().split()))
angka = []
for N in range(0, Kolom) :
    angka.append(Isi[N])
print(" ")
for N in range(0, Kolom) :
    print(angka[N] * (N + 1), end=' ')