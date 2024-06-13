print("please enter radius of the circle")
radius=input()

def calcArea(radius):
    pi = 3.141592653589793
    return pi**float(radius)

print(f"area of the circle equals {calcArea(radius)}")