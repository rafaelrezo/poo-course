import sys

if len(sys.argv) < 3:
    print(f"Uso: {sys.argv[0]} valor1 valor2 ... valorN valor_referencia")
    sys.exit(1)

valores = list(map(float, sys.argv[1:-1]))
referencia = float(sys.argv[-1])

media = sum(valores) / len(valores)

print(f"Média: {media}")
print(f"Valor de referência: {referencia}")
if media > referencia:
    print("A média é maior que o valor de referência.")
else:
    print("A média NÃO é maior que o valor de referência.")
