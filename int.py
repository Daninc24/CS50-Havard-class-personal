try:
    x = int(input("x: "))
except ValueError:
    print("not an integer")
else:
    print("its an integer")