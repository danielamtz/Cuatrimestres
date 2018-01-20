from productos import productos
from datetime import datetime

jl = productos()
date = raw_input("Fecha de caducidad (DD/MM/YYYY): ")
jl.fechaCaducidad = datetime.strptime(date, '%d/%m/%Y')
print jl.Caducidad()
lote=raw_input("ingresa lote: ")
jl.numeroLote=lote