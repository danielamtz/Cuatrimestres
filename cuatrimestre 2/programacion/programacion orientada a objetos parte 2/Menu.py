option = 0
while option != 4:
    option = int(input("Seleccione tipo de Producto a capturar\n"
                       "1. Productos Frescos\n"
                       "2. Productos Refrigerados\n"
                       "3. Productos Congelados\n"
                       "4. Salir\n"
                       "Opción: "))

    if option == 1:
        print("-------------- Creando Producto Fresco...")
    elif option == 2:
        print("-------------- Creando Producto Refrigerado...")
    elif option == 3:
        print("-------------- Creando Producto Congelado...")
    elif option == 4:
        pass
    else:
        print("-------------- OPCIÓN NO VÁLIDA...")
