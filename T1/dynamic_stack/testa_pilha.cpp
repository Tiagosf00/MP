// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include <stdexcept>
#include "pilha.hpp"


// Eu ia fazer uma classe de teste de unidade,
// mas ia dar muito trabalho deixei os testes aqui mesmo

int main() {
    int num = 1;

    // Teste 1 - Método pop com a pilha vazia
    Pilha pilha1;
    try {
        pilha1.pop();
        std::cout << "Teste " << num++ << " falhou.\n";
    }catch (std::runtime_error &exception) {
        std::cout << "Teste " << num++ << " funcionou corretamente.\n";
    }


    // Teste 2 - Método top com a pilha vazia
    Pilha pilha2 = Pilha();
    try {
        pilha2.top();  // ignora o retorno
        std::cout << "Teste " << num++ << " falhou.\n";
    }catch (std::runtime_error &exception) {
        std::cout << "Teste " << num++ << " funcionou corretamente.\n";
    }


    // Teste 3 - Método push
    Pilha pilha3 = Pilha();
    try {
        pilha3.push(5);
        if (pilha3.top() != 5)
            throw std::runtime_error("Elemento não foi corretamente inserido.");
        std::cout << "Teste " << num++ << " funcionou corretamente.\n";
    }catch (std::runtime_error &exception) {
        std::cout << "Teste " << num++ << " falhou.\n";
    }


    // Teste 4 - Teste do tamanho máximo da pilha
    Pilha pilha4 = Pilha();
    try {
        int limit = 10000 + 1;
        for (int i = 0; i < limit; i++)
            pilha4.push(1);
        std::cout << "Teste " << num++ << " falhou.\n";
    }catch (std::runtime_error &exception) {
        std::cout << "Teste " << num++ << " funcionou corretamente.\n";
    }


    // Teste 5 - Teste da conservação dos elementos da pilha
    Pilha pilha5 = Pilha();
    try {
        pilha5.push(5);
        pilha5.push(10);
        pilha5.push(15);

        if (pilha5.top() != 15)
            throw std::runtime_error("Elemento não foi corretamente inserido.");

        pilha5.pop();

        if (pilha5.top() != 10)
            throw std::runtime_error("Elemento não foi corretamente inserido.");

        pilha5.pop();

        if (pilha5.top() != 5)
            throw std::runtime_error("Elemento não foi corretamente inserido.");

        std::cout << "Teste " << num++ << " funcionou corretamente.\n";
    }catch (std::runtime_error &exception) {
        std::cout << "Teste " << num++ << " falhou.\n";
    }

    return 0;
}
