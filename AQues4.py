def func(m,n):
    if n==0:
        return 0
    return m+func(m,n-1)
print(func(int(input()),int(input())))
