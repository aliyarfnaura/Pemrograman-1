def MaxBilangan(w, x, y, z):
    if w > x and w > y and w > z:
        return w
    elif x > w and x > y and x > z:
        return x
    elif y > w and y > x and y > z:
        return y
    else:
        return z

a, b, c, d = input().split()
hasil = MaxBilangan(a, b, c, d)
print(hasil)
