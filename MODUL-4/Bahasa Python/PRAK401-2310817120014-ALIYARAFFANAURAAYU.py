number, alphabet = input().split()
x = int(number)
for i in range(1, 51):
    if (i % x == 0) :
        print(alphabet, end=' ')
    else:
        print(i, end=' ')