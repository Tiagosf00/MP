// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include "pilha.hpp"

// Constructor and methods from the class Pilha using Static Array.

Pilha::Pilha() {
    stack_ = reinterpret_cast<int*> (malloc(kSizeLimit*sizeof(int)));
    stackSize_ = 0;
}

Pilha::~Pilha() {
    free(stack_);
}


void Pilha::push(int value) {  // throw (runtime_error)
    if (isFull()) {
        throw std::runtime_error("A pilha está cheia.");
    }

    stack_[stackSize_++] = value;
}


void Pilha::pop() {  // throw (runtime_error)
    if (isEmpty()) {
        throw std::runtime_error("A pilha está vazia.");
    }

    stackSize_--;
}


int Pilha::top() {  // throw (runtime_error)
    if (isEmpty()) {
        throw std::runtime_error("A pilha está vazia.");
    }

    return stack_[stackSize_-1];
}
