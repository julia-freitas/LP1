//Ler dois números n1 e n2
// Exibir todos os números entre n1 e n2
// Fazer em Python e em C

n1 = input()
n2 = input()

# CASO N1 == N2
if (n1 == n2):
    print("n1 eh igual a n2")
    
# CASO N1 < N2, IMPRIME NUMEROS ENTRE N1 E N2    
if (n1 < n2):
    for i in range (n1, n2):
        print(i),
    
# CASO N2 < N1, IMPRIME NUMEROS ENTRE N2 E N1
else:
    for i in range (n2, n1):
        print(i),
