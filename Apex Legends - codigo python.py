c = int(input("Introduce el circulo en el cual te encuentras: "))
t = float(input("Introduce el tiempo que pasaste en la zona: "))
if  c==1:
    daño=t*2
    da= "{:.2f}".format(daño)
    print("El daño recibido por estar en la primera zona es: ", da)
elif c==2:
    daño=t*5
    da= "{:.2f}".format(daño)
    print("el daño recibido por estar en la segunda zona es: ", da)
elif c==3:
    daño=t*10
    da= "{:.2f}".format(daño)
    print("El daño recibido por estar en la tercera zona es: ", da)
elif c>=4:
    daño=t*25
    da= "{:.2f}".format(daño)
    print("EL daño recibido por estar en la cuarta o mayor zona es: ", da)
else: 
    print("Error")