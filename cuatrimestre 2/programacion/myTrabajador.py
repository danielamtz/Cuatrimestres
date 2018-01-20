from trabajador_ import trabajador

for x in xrange (3):
    myTrabajador = trabajador()
    nombre= raw_input("ingresa nombre: ")
    myTrabajador.ingresoNombre(nombre)
    puesto=raw_input ("puesto: ")
    horas= float(input("horas trabajadas a la semana: "))
    sueldo= float(input("sueldo por hora trabajada: "))
    myTrabajador.calculoDeSalario(horas, sueldo)
    opcion= raw_input("Cual impuesto pagas? IVA ISR o LOS DOS: ")
    myTrabajador.retencionDeImpuestos(opcion)
    myTrabajador.function()
    myTrabajador.printtoscreen ()
