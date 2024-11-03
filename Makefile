SRC = src/main.cpp


text_game: main.o
	clang++ main.o -o text_game

main.o: $(SRC)
	clang++ -c $(SRC) -o main.o

run:
	./text_game

clean:
	rm -f main.o
