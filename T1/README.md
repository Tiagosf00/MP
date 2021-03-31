# Implementação estática e dinâmica de uma pilha

Tiago de Souza Fernandes - 18/0131818

Dentro das duas pastas 'dynamic_stack' e 'static_stack' se encontram as implementações das pilhas do trabalho.

O arquivo 'teste_pilha.cpp' é igual para as duas implementações, e o arquivo 'pilha.h' possui apenas uma diferença (definição do struct Node para lidar com a lista encadeada), mantendo a interface igual para as duas implementações.

O cpplint foi utilizado para checar o padrão de codificação, o cppcheck foi utilizado para identificar erros, assim como o valgrind.

TODO: implementar tipos abstratos, em vez de utilizar apenas a variável inteira (provavelmente utilizando das classes templates do C++).