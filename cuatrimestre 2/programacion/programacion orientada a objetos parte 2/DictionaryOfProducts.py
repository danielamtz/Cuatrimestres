from Products import Product




dictionaryOfProducts = {}
option = 'Y'
while option == 'Y':
    newProduct = Product()
    code = int(input("CODE: "))
    newProduct.setCode(code)
    newProduct.setName(raw_input("NAME: "))
    newProduct.lot = int(input("LOT NUMBER: "))
    newProduct.quantity = int(input("QUANTITY: "))

    dictionaryOfProducts[code] = newProduct
    option = raw_input('Another Product? (Y/N) ').upper()

print_dict()

wantToDelete = input('Want to delete a product? (Y/N) ').upper()
if wantToDelete:
    code = int(input('Code of product to delete: '))
    del dictionaryOfProducts[code]
    print_dict()
