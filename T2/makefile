FLAGS = -std=c++17 -WALL

run: all
	./romano

all: testa_romano.cpp romano.cpp romano.hpp catch_amalgamated.cpp catch_amalgamated.hpp
	g++ -o romano -std=c++17 -Wall testa_romano.cpp romano.cpp romano.hpp catch_amalgamated.cpp catch_amalgamated.hpp -I.

verify: all
	valgrind --leak-check=full ./romano
	cppcheck --enable=warning .

# romano: testa_romano.cpp romano.cpp romano.hpp catch_amalgamated.cpp catch_amalgamated.hpp
# 	g++ -o romano -std=c++17 -Wall testa_romano.cpp romano.cpp romano.hpp catch_amalgamated.cpp catch_amalgamated.hpp -I.