valor1 = int(input('digite o valor do produto 1: '))
valor2 = int(input('digite o valor do produto 2: '))
valor3 = int(input('digite o valor do produto 3: '))
valor4 = int(input('digite o valor do produto 4: '))
valor5 = int(input('digite o valor do produto 5: '))

total= (valor1+valor2+valor3+valor4+valor5)

print('O valor total da compra e :',total)

valor6 = int(input('digite o valor pago: '))

troco=valor6-total

print('O troco e :',troco)