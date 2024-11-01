SRC = src/main.cpp

run: text_game
	./text_game

text_game: main.o
	g++ -std=c++11 main.o -o text_game

main.o: $(SRC)
	g++ -std=c++11 -c $(SRC) -o main.o

clean:
	rm -f main.o