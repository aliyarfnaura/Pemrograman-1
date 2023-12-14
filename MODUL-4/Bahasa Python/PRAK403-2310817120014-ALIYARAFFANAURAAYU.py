number = input().split()
a, b = map(int, number)

if a > b:
    x, y = a, b
    while x >= b and y <= a:
        print(f"{x} {y}", end=" ")
        if x == b:
            break
        else:
            print("- ", end="")
        x -= 1
        y += 1
else:
    x, y = a, b
    while x <= b and y >= a:
        print(f"{x} {y}", end=" ")
        if x == b:
            break
        else:
            print("- ", end="")
        x += 1
        y -= 1