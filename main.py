
def calcArr(arr):
    repetidos = {}

    for elem in arr:
        if elem in repetidos:
            repetidos[elem] += 1
        else:
            repetidos[elem] = 1

    for val in repetidos.values():
        if val > len(arr) // 2:
            return True
    
    return False

def arrDivCon(arr):
    if len(arr) == 1:
        return (arr[0], 1, True)
    
    # Dividir problema
    mid = len(arr)//2
    arr_izq = arr[:mid]
    arr_der = arr[mid:]

    # Resolver de forma recursirva
    max_izq, cant_izq, _ = arrDivCon(arr_izq)
    max_der, cant_der, _ = arrDivCon(arr_der)

    # Juntar las soluciones
    # Buscar max_izq en la der
    for elem in arr_der:
        if elem == max_izq:
            cant_izq += 1

    # Buscar max_der en la izq
    for elem in arr_izq:
        if elem == max_der:
            cant_der += 1

    if cant_izq > cant_der:
        return (max_izq, cant_izq, cant_izq > len(arr) // 2)

    return (max_der, cant_der, cant_der > len(arr) // 2)


if __name__ == "__main__":
    arr = [1,2,3,4,5,6] # False
    print(arr, calcArr(arr))
    print(arrDivCon(arr))
    
    arr = [1,2,1,2,2,2,1] # True
    print(arr, calcArr(arr))
    print(arrDivCon(arr))
    
    arr = [1] # True
    print(arr, calcArr(arr))
    print(arrDivCon(arr))

    arr = [1, 1] # False
    print(arr, calcArr(arr))
    print(arrDivCon(arr))
    
    arr = [1,1,1,1,2,2,2,2] # False
    print(arr, calcArr(arr))
    print(arrDivCon(arr))
    
    arr = [1,1,1,1,2,1,2,2] # True
    print(arr, calcArr(arr))
    print(arrDivCon(arr))