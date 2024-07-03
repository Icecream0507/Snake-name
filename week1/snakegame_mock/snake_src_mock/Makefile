CXXFLAG1 = -o
CXXFLAG2 = -c

snakegame: main.o game.o snake.o
	g++ $(CXXFLAG1)  snakegame main.o game.o snake.o -L C:\MinGW\w64devkit\.lib -lpdcurses

main.o: main.cpp game.h
	g++ $(CXXFLAG2)  main.cpp

game.o: game.cpp snake.h
	g++ $(CXXFLAG2) game.cpp
	
snake.o: snake.cpp
	g++ $(CXXFLAG2) snake.cpp

clean:
	rm *.o 
	rm snakegame.exe

run:
	./snakegame.exe
