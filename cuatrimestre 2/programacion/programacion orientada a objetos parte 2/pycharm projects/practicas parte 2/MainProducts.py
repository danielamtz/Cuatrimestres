from datetime import datetime
from productoFresco import productoFresco
from productoRefrigerado import productoRefrigerado
from productoCongelado import productoCongelado


myProductoFresco= productoFresco()
print ("-------PRODUCTOS FRESCOS-------")
pais= raw_input("Pais de origen: ")
myProductoFresco.pais=pais
fechaEnvasado= raw_input("Fecha de envasado (DD/MM/YYYY): ")
myProductoFresco.fechaEnvasado= fechaEnvasado
lote=raw_input("Lote del producto: ")
myProductoFresco.lote=lote
date = raw_input("Fecha de caducidad (DD/MM/YYYY): ")
myProductoFresco.caducidad = datetime.strptime(date, '%d/%m/%Y')
print("Estado del producto: "+myProductoFresco.getNet())

myProductoRefrigerado= productoRefrigerado()
print ("-------PRODUCTOS REFRIGERADO-------")
name=raw_input("Nombre de la empresa surpevisora: ")
myProductoRefrigerado.setNombreEmpresa(name)
codigo=raw_input("Codigo postal de la empresa surpevisora: ")
myProductoRefrigerado.setCodigoPostalEmpresa(codigo)
ciudad=raw_input("Ciudad de localizacion de la empresa surpevisora: ")
myProductoRefrigerado.setCiudadEmpresa(ciudad)
fechaEnvasado= raw_input("Fecha de envasado (DD/MM/YYYY): ")
myProductoRefrigerado.fechaEnvasado= fechaEnvasado
lote=raw_input("Lote del producto: ")
myProductoRefrigerado.lote=lote
temperatura=raw_input("Temperatura ideal: ")
myProductoRefrigerado.setTemperatuaIdeal(temperatura)
date = raw_input("Fecha de caducidad (DD/MM/YYYY): ")
myProductoRefrigerado.caducidad = datetime.strptime(date, '%d/%m/%Y')
print("Estado del producto: "+myProductoRefrigerado.getNet())

myProductoCongelado= productoCongelado()
print ("-------PRODUCTOS CONGELADO-------")
fechaEnvasado= raw_input("Fecha de envasado (DD/MM/YYYY): ")
myProductoCongelado.fechaEnvasado= fechaEnvasado
pais=raw_input("Pais de origen: ")
myProductoCongelado.setPaisOrigen(pais)
temperatura=input("Temperatura ideal: ")
myProductoCongelado.setTemperatuaIdeal(temperatura)
lote=raw_input("Lote del producto: ")
myProductoCongelado.lote=lote
date = raw_input("Fecha de caducidad (DD/MM/YYYY): ")
myProductoCongelado.caducidad = datetime.strptime(date, '%d/%m/%Y')
print("Estado del producto: "+myProductoCongelado.getNet())

print ("\n")
print ("INFORMACION ALMACENADA: ")
print ("-------PRODUCTOS FRESCOS-------")
print ("Pais de origen: ")+myProductoFresco.pais
print ("Fecha de envasado (DD/MM/YYYY): ")+myProductoFresco.fechaEnvasado
print ("Lote del producto: ")+myProductoFresco.lote
print ("Fecha de caducidad (DD/MM/YYYY): "), myProductoFresco.caducidad
print ("Estado del producto: ")+myProductoFresco.getNet()
print ("-------PRODUCTOS REFRIGERADOS-------")
print ("Nombre de la empresa surpevisora: ")+ myProductoRefrigerado.getNombreEmpresa()
print ("Codigo postal de la empresa surpevisora: ")+ myProductoRefrigerado.getCodigoPostalEmpresa()
print ("Ciudad de localizacion de la empresa surpevisora: ")+  myProductoRefrigerado.getCiudadEmpresa()
print ("Fecha de envasado (DD/MM/YYYY): ")+ myProductoRefrigerado.fechaEnvasado
print ("Temperatura ideal: ")+ myProductoRefrigerado.getTemperaturaIdeal()
print ("Fecha de caducidad (DD/MM/YYYY): "), myProductoRefrigerado.caducidad
print ("-------PRODUCTOS CONGELADOS-------")
print ("Pais de origen: ")+myProductoCongelado.getPaisOrigen()
print ("Fecha de envasado (DD/MM/YYYY): ")+myProductoCongelado.fechaEnvasado
print ("Lote del producto: ")+ myProductoCongelado.lote
print ("Temperatura ideal: "), myProductoCongelado.getTemperaturaIdeal()
print ("Fecha de caducidad (DD/MM/YYYY): "), myProductoCongelado.caducidad
print ("Estado del producto: ")+myProductoFresco.getNet()