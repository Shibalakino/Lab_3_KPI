precision = float(input("enter a value of precesion : "))
a = float(input("enter a value of a : "))
p = float(input("enter a value of p : "))
list_Of_Data = [0, 1.0]
counter = 0
while True :
    list_Of_Data[0] = (1 / p) * (((p - 1) * list_Of_Data[1]) + (a / pow(list_Of_Data[1], (p - 1))))
    counter += 1
    print("iteration № : ", counter, " - ", list_Of_Data[0])
    if abs(list_Of_Data[0] - list_Of_Data[1]) <= precision:
        print(list_Of_Data[0])
        break
    else:
        list_Of_Data[1] = list_Of_Data[0]
        continue
