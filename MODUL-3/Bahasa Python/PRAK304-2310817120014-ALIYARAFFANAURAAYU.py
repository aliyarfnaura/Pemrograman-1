Num_3 = int(input())

if Num_3 == 0:
    print("Nol")
elif 1 <= Num_3 <= 9:
    print("Satuan")
elif 10 <= Num_3 <= 19:
    print("Belasan")
elif 20 <= Num_3 <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")
