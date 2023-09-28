#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

// Função para gerar um vetor randômico de tamanho n
std::vector<int> gerarVetorRandomico(int n) {
    std::vector<int> vetor;

    for (int i = 0; i < n; i++) {
        vetor.push_back(rand() % 100);  // Gera um número aleatório entre 0 e 99
    }

    return vetor;
}

// Função para imprimir os elementos de um vetor
void imprimirVetor(const std::vector<int>& vetor) {
    for (int i = 0; i < vetor.size(); i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    srand(time(0));  // Semente para geração de números aleatórios

    const int tamanhoVetor = 10;

    std::vector<int> vetorAntigo = gerarVetorRandomico(tamanhoVetor);
    imprimirVetor(vetorAntigo);

    while (true) {
        std::vector<int> vetorAtualizado = gerarVetorRandomico(tamanhoVetor);

        imprimirVetor(vetorAntigo);
        imprimirVetor(vetorAtualizado);

        vetorAntigo = vetorAtualizado;

        std::this_thread::sleep_for(std::chrono::seconds(5));  // Pausa de 5 segundos
    }

    return 0;
}
