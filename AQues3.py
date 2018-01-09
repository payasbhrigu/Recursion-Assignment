def func(n):
    if n//2==0:
        print(1,end='')
        return
    y=n%2
    func(n//2)
    print(y,end='')
func(int(input()))
