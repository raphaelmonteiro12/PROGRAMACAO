num = []
print('digite 20 numeros:')
  
for i in range(0, 20, 1):
    x=int(input())
    num.append(x)
b=int(input('digite um numero para multiplicar:'))
comp=0;
for i in range(0, 20, 1):
    num[i] = num[i]*b
           
print('Os numeros inseridos e multiplicados pela constante foram:') 
for i in range(0, 20, 1):
	print("",num[i])