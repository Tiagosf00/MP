// Copyright [2020] <Tiago de Souza Fernandes>
#ifndef PILHA_HPP_INCLUDED
#define PILHA_HPP_INCLUDED

#include <stdexcept>
#include <iostream>

// Pilha class declaration

class Pilha {
 private:
    const int kSizeLimit = 10000;

    // Number os elements in the stack
    int stackSize_;

    // Store the stack
    int* stack_;

    // Check if the stack is full
    bool isFull();

    // Check if stack is empty
    bool isEmpty();

 public:
    Pilha();  // constructor
    ~Pilha();  // destructor


    // Insert the element in the stack
    void push(int);  // throw (runtime_error)

    // Remove the element in the top of the stack
    void pop();  // throw (runtime_error)

    // Return the element in the top of the stack
    int top();  // throw (runtime_error)
};

inline bool Pilha::isFull() {
    return stackSize_ == kSizeLimit;
}

inline bool Pilha::isEmpty() {
    return stackSize_ == 0;
}


#endif
