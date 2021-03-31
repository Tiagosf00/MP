# Conversor de algarismos romanos para arábicos

Tiago de Souza Fernandes - 18/0131818

Foi utilizada a métodologia de desenvolvimento orientado a testes (TDD) para o desenvolvimento do conversor.

O cpplint foi utilizado para checar o padrão de codificação. O cpplint reclama do uso da biblioteca std::regex, eu pesquisei e de acordo com o esse link (https://chromium-cpp.appspot.com/) a Google não recomenda o seu uso pois possui muito conflito com uma outra biblioteca que eles desenvolvem (do Chromium) que também implementa expressões regulares. "Overlaps with many regular expression libraries in Chromium. When in doubt, use re2.".
Como eu não estou utilizando essa biblioteca, optei por utilizar a biblioteca padrão regex.

O cppcheck foi utilizado para identificar erros, assim como o valgrind.

Foram realizados 3011 testes utilizando o framework catch.
O programa relata um warning quando compilado, por conta da implementação do catch utilizada (baixei o arquivo catch_amalgamated.hpp diretamente do repositório oficial)
