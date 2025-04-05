peca1 = input().split()
codigo1 = int(peca1[0])
qtdPeca1 = int(peca1[1])
valorPeca1 = float(peca1[2])

peca2 = input().split()
codigo2 = int(peca2[0])
qtdPeca2 = int(peca2[1])
valorPeca2 = float(peca2[2])

print(f'VALOR A PAGAR: R$ {(qtdPeca1*valorPeca1)+(qtdPeca2*valorPeca2):.2f}')