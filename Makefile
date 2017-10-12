all: main.c 
	g++ main.c -o raycast.exe

clean:
	rm -rf raycast.exe *~