// Copyright [2020] <Tiago de Souza Fernandes>
#include <iostream>
#include "pilha.hpp"

// Constructor and methods from the class Pilha using Linked List.

Pilha::Pilha() {
    stack_ = reinterpret_cast<Node*> (malloc(sizeof(Node)));
    stack_->lastNode = NULL;
    stackSize_ = 0;
}

Pilha::~Pilha() {
    while (stack_ != NULL) {
        Node* tmp = stack_->lastNode;
        free(stack_);
        stack_ = tmp;
        stackSize_--;
    }
}


void Pilha::push(int value) {  // throw (runtime_error)
    if (isFull()) {
        throw std::runtime_error("A pilha está cheia.");
    }

    Node* newNode = reinterpret_cast<Node*> (malloc(sizeof(Node)));
    newNode->value_ = value;
    newNode->lastNode = stack_;

    stack_ = newNode;

    stackSize_++;
}


void Pilha::pop() {  // throw (runtime_error)
    if (isEmpty()) {
        throw std::runtime_error("A pilha está vazia.");
    }

    Node* tmp = stack_->lastNode;
    free(stack_);
    stack_ = tmp;

    stackSize_--;
}


int Pilha::top() {  // throw (runtime_error)
    if (isEmpty()) {
        throw std::runtime_error("A pilha está vazia.");
    }

    return stack_->value_;
}
