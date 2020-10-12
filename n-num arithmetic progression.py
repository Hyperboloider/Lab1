a = float(input('перший член прогресії: '))
d = float(input('різниця прогресії: '))
n = float(input('номер шуканого числа: '))
while n <=0 :
    print('n має бути більшим за 0!')
    n = float(input('номер шуканого числа: '))

n = a+d*(n-1)

print(n)