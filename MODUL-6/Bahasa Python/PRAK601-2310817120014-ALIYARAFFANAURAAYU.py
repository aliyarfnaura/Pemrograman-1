Baris, Kolom = map(int, input().split())
isi = list(map(int, input().split()))
angka = []
for x in range(0, Baris * Kolom, Kolom) :
    angka.append(isi[x : x + Kolom])
print(" ")
for x in range(Baris) :
    for y in range(Kolom) :
        print(angka[x][y], end=' ')
    print()