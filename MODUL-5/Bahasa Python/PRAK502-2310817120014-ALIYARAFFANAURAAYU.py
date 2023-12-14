def hitung(nilai1, nilai2):
    Hasil = nilai1 - nilai2
    return abs(Hasil)

def mutlak(angka):
    if angka < 0:
        angka = -angka
    return angka

a, c, b, d = input().split()
Hasil = hitung(int(a), int(b)) + hitung(int(c), int(d))
print(mutlak(Hasil))