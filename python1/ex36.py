num = []
segvet = []
print('digite 20 numeros:')
 
for i in range(0, 20, 1):
    x = int(input())
    num.append(x)

b = int(input('digite um numero para multiplicar:'))

for i in range(0, 20, 1):
    y=num[i]*b
    segvet.append(y)       
print('Os numeros digitados e multiplicados pela constante foram:')
for i in range(0, 20, 1):
    print("",segvet[i])