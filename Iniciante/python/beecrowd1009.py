nome = str(input())
salario = float(input())
vendas = float(input())

bonusSalario = vendas*(15/100)

print(f'TOTAL = R$ {salario+bonusSalario:.2f}')
