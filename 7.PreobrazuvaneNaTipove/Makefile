all: quadraticroots.exe

quadraticroots.exe: main.o quadraticroots.o
	gcc main.o quadraticroots.o -o quadraticroots.exe -lm

main.o: main.c quadraticroots.h
	gcc -c main.c -o main.o

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o

clean:
	del /f /q *.o quadraticroots.exe