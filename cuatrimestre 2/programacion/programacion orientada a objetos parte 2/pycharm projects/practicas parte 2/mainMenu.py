from productoFresco import productoFresco
from productoRefrigerado import productoRefrigerado
from productoCongelado import productoCongelado


dictionaryOfProducts = {}
dictionaryOfProducts2={}
dictionaryOfProducts3={}
myProductofresco = productoFresco()
myProductoRefrigerado = productoRefrigerado()
myProductoCongelado = productoCongelado()

option = 0
opcion = "S"
respuesta = 0
listProductosCongelados = []
listProductosRefrigerados = []
listProductosfrescos = []
while option != 6:
    print ("Seleccione tipo de Producto a capturar\n"
           "1. Productos Frescos\n"
           "2. Productos Refrigerados\n"
           "3. Productos Congelados\n"
           "4. Eliminar\n"
           "5. Imprimir\n"
           "6. Salir\n")
    option = int(input("Opcion: "))

    if option == 1:
        opcion = "S"

        while (opcion == "S"):
            print("-------------- Creando Producto Fresco...")
            myProductofresco = productoFresco()
            value = int(input("Ingresa el codigo: "))
            myProductofresco.setCode(value)
            myProductofresco.setName(raw_input("Ingresa nombre: "))
            myProductofresco.setCantidad(int(input("Ingresa cantidad: ")))
            pais = (raw_input("Ingrese pais del producto: "))
            myProductofresco.ingresaPais(pais)
            listProductosfrescos.append(myProductofresco)
            dictionaryOfProducts[value] = myProductofresco
            date= raw_input("Ingrese fecha de caducidad: ")
            myProductofresco.Caducidad(date)
            if myProductofresco.Caducidad(date):
                print "Caducado"
            else:
                print "vigente"
            opcion = raw_input("Otro producto? (S/N)").upper()

        for x in listProductosfrescos:
            print(x)

    elif option == 2:
        opcion = "S"
        while (opcion == "S"):
            print("-------------- Creando Producto Refrigerado...")
            myProductoRefrigerado = productoRefrigerado()
            value = int(input("Ingresa el codigo: "))
            myProductoRefrigerado.setCode(value)
            myProductoRefrigerado.setName(raw_input("Ingresa nombre: "))
            myProductoRefrigerado.setCantidad(int(input("Ingresa cantidad: ")))
            myProductoRefrigerado.setNombreEmpresa(raw_input("Ingresa nombre de la empresa: "))
            myProductoRefrigerado.setCiudadEmpresa(raw_input("Ciudad de localizacion de la empresa: "))
            myProductoRefrigerado.setTemperatuaIdeal(int(input("Temperatura: ")))
            listProductosRefrigerados.append(myProductoRefrigerado)
            dictionaryOfProducts2[value] = myProductoRefrigerado
            date = raw_input("Ingrese fecha de caducidad: ")
            myProductoRefrigerado.Caducidad(date)
            if myProductoRefrigerado.Caducidad(date):
                print "Caducado"
            else:
                print "vigente"
            opcion = raw_input("Otro producto? (S/N)").upper()

        for x in listProductosRefrigerados:
            print(x)

    elif option == 3:
        opcion = "S"
        while (opcion == "S"):
            print("-------------- Creando Producto Congelado...")
            myProductoCongelado = productoCongelado()
            value = int(input("Ingresa el codigo: "))
            myProductoCongelado.setCode(value)
            myProductoCongelado.setName(raw_input("Ingresa nombre: "))
            myProductoCongelado.setCantidad(int(input("Ingresa cantidad: ")))
            pais = raw_input("Pais de origen: ")
            myProductoCongelado.setpaisOrigen(pais)
            myProductoCongelado.setTemperatuaIdeal(int(input("Temperatura: ")))
            listProductosCongelados.append(myProductoCongelado)
            dictionaryOfProducts3[value] = myProductoCongelado
            date = raw_input("Ingrese fecha de caducidad: ")
            myProductoCongelado.Caducidad(date)
            if myProductoCongelado.Caducidad(date):
                print "Caducado"
            else:
                print "vigente"
            opcion = raw_input("Otro producto? (S/N)").upper()

        for x in listProductosCongelados:
            print(x)

    elif option == 4:
        respuesta = int(input("De que producto desea eliminar informacion? \n"
                              "1.-Productos frescos\n"
                              "2.-Productos refrigerados\n"
                              "3.-Productos congelados\n"
                              "Opcion: \n"))
        if respuesta ==1:

            value = int(input('Codigo del producto a eliminar '))
            del dictionaryOfProducts[value]


        elif respuesta==2:
            value = int(input('Codigo del producto a eliminar '))
            del dictionaryOfProducts2[value]


        elif respuesta==3:
            value = int(input("Codigo del producto: "))
            del dictionaryOfProducts3[value]


    elif option == 5:
        respuesta = int(input("Que informacion desea imprimir? \n"
                              "1.-Productos frescos\n"
                              "2.-Productos refrigerados\n"
                              "3.-Productos congelados\n"
                              "Opcion: \n"))
        if respuesta == 1:


                if len(dictionaryOfProducts) == 0:
                    print("Empty dictionary")
                else:
                    for key, p in dictionaryOfProducts.items():
                        print(p)




        elif respuesta == 2:
            if len(dictionaryOfProducts2) == 0:
                print("Empty dictionary")
            else:
                for key, p in dictionaryOfProducts2.items():
                    print(p)

        elif respuesta == 3:
            if len(dictionaryOfProducts3) == 0:
                print("Empty dictionary")
            else:
                for key, p in dictionaryOfProducts3.items():
                    print(p)

        else:
            print "Opcion invalida"




    else:
        print("-------------- OPCION NO VALIDA...")
