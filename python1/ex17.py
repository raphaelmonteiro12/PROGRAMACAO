lado1 = int(input('digite o valor do primeiro lado: '))
lado2 = int(input('digite o valor do segundo lado: '))
lado3 = int(input('digite o valor do terceiro lado: '))
		
if(((lado1*lado1)+(lado2*lado2))==(lado3*lado3)):
    print("Isso e um triangulo retangulo")
		
elif(((lado1*lado1)+(lado3*lado3))==(lado2*lado2)):
		
	print("Isso e um triangulo retangulo")
		
elif(((lado2*lado2)+(lado3*lado3))==(lado1*lado1)):
		
	print("Isso e um triangulo retangulo")
		
else:
    print("Isso nao e um triangulo retangulo")