all:
	g++ -I base -I SDL/include -L SDL/lib -o main *.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_mixer -lSDL2_image -lSDL2_ttf
	./main.exe