from cad import cad
from datetime import datetime

jl = cad()
date = raw_input("Fecha de caducidad (DD/MM/YYYY): ")
jl.caducidad = datetime.strptime(date, '%d/%m/%Y')
print("ttteHH: " + jl.getNet())