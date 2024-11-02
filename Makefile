SRC = src/main.cpp


text_game: main.o
	clang++ -I/nlohmann/json.hpp main.o -o text_game

main.o: $(SRC)
	clang++ -I/nlohmann/json.hpp -c $(SRC) -o main.o

run:
	./text_game

clean:
	rm -f main.o
