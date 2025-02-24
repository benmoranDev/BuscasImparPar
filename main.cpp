#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort

// Função para adicionar um número ao vetor
void adicionarNumero(std::vector<int>& numeros, int num) {
    numeros.push_back(num);
}

// Função para ordenar o vetor
void ordenarArray(std::vector<int>& numeros) {
    std::sort(numeros.begin(), numeros.end());
}

// Função para exibir os números do vetor
void exibirNumeros(const std::vector<int>& numeros, const std::string& mensagem) {
    std::cout << mensagem;
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
// Função para filtrar números pares
std::vector<int> filtrarPares(const std::vector<int>& numeros) {
    std::vector<int> pares;
    for (int num : numeros) {
        if (num % 2 == 0) {
            pares.push_back(num);
        }
    }
    return pares;
}

// Função para filtrar números ímpares
std::vector<int> filtrarImpares(const std::vector<int>& numeros) {
    std::vector<int> impares;
    for (int num : numeros) {
        if (num % 2 != 0) {
            impares.push_back(num);
        }
    }
    return impares;
}

// Função principal (main)
int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    char opcao;

    do {
        int num;

        std::cout << "Digite um numero para adicionar ao array: ";
        std::cin >> num;

        adicionarNumero(numeros, num);

        std::cout << "Deseja adicionar outro numero? (s/n): ";
        std::cin >> opcao;
        std::vector<int> pares = filtrarPares(numeros);
        std::vector<int> impares = filtrarImpares(numeros);

        exibirNumeros(numeros, "Todos os numeros: ");
        exibirNumeros(pares, "Numeros pares: ");
        exibirNumeros(impares, "Numeros Impares: ");

        // Ordenar o vetor antes de exibir
        ordenarArray(numeros);


    } while (opcao == 's' || opcao == 'S');


    // Exibir o array ordenado
    exibirNumeros(numeros, "Array ordenado: ");

    return 0;
}