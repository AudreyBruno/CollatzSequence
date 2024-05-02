#include <iostream>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Funcao que gera a sequência
std::vector<int> sequencia(int n) {
    std::vector<int> sequence; // Cria um vetor para armazenar a sequencia
    sequence.push_back(n); // Adiciona o numero inicial a sequência
    while (n != 1) { // Faz um loop enquanto 'n' for diferente de 1
        if (n % 2 == 0) { // Faz um operador de resto para saber se o numero e par ou nao
            n = n / 2; // Se for par divide por 2
        } else { 
            n = 3 * n + 1; // Se nao multiplica 3 e soma 1
        }
        sequence.push_back(n); // Adiciona o proximo numero a sequencia
    }
    return sequence; // Quando o loop acabar retorna a sequencia completa
}

int main() {
    while (true) { // Cria um loop infinito
        try {
            int number;
            std::cout << "Digite um numero inteiro positivo maior que 1: ";
            std::cin >> number; // Pede para o usuairo digitar um numero
            if (number <= 1) { // Verifica se o numero é valido
                throw std::invalid_argument("O numero precisa ser maior que 1.");
            }
            std::vector<int> sequence = sequencia(number); // Gera a sequência de Collatz para o numero dado
            for (int num : sequence) { // Itera sobre os numeros da sequência
                std::cout << num << " "; // Imprime cada número seguido de um espaco
            }
            std::cout << std::endl; // Imprime uma nova linha
            break; // Sai do loop
        } catch (std::invalid_argument &e) { // Captura excecoes do tipo invalid_argument
            std::cout << e.what() << std::endl; // Imprime a mensagem de erro
        }
    }
    return 0; // Retorna 0 para indicar sucesso
}