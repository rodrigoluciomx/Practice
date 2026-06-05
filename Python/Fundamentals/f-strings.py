#Fundamentals

name = "Ana"
year = 2020
text = f"Hola {name}"
#print(text)

calculo = f"Hola, {name}, tu edad es {2026 - year} años"
#print(calculo)

func = f"HOLA {name.upper()}"
#print(func)

edad = 20
text_if = f"Hola {name}, eres {'mayor' if edad >= 18 else 'menor'} de edad"
#print(text_if)

#Advanced
from datetime import datetime

bank_balance = 1200000000
text = f"Tu saldo en la cuenta bancaria es {bank_balance:,}"
print(text)

stock_price = 1.405
text = f"El valor del stock es: {stock_price:.1f}"
print(text)

text = f"El valor del stock es: {stock_price:.2f}"
print(text)

product = "Laptop"
price = 1000

text = f"Producto: {product:<15} | Precio: {price:>15}"
print(f"{text}\n{text}")

date = datetime(2024,12,5,10,10)

text = f"La fecha completa es {date}"
print(text)

text = f"La fecha completa es {date:%A %d de %B de %Y a las %I:%M %p}"
print(text)

discount = 0.5542
percentage = f"Discount: {discount:.0%}"
print(percentage)

percentage = f"Discount: {discount:.2%}"
print(percentage)

value = 0.000003456
print(f"Porcentaje: {value * 100:.2e}%")

#Simplified
value = value * 100
print(f"Porcentaje: {value:.2e}%")
