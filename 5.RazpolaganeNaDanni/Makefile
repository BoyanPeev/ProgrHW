all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeadd.exe: safeadd.o safeint.o
	gcc safeadd.o safeint.o -o safeadd.exe

safesubtract.exe: safesubtract.o safeint.o
	gcc safesubtract.o safeint.o -o safesubtract.exe

safemultiply.exe: safemultiply.o safeint.o
	gcc safemultiply.o safeint.o -o safemultiply.exe

safedivide.exe: safedivide.o safeint.o
	gcc safedivide.o safeint.o -o safedivide.exe

safeadd.o: safeadd.c safeint.h
	gcc -c safeadd.c -o safeadd.o

safesubtract.o: safesubtract.c safeint.h
	gcc -c safesubtract.c -o safesubtract.o

safemultiply.o: safemultiply.c safeint.h
	gcc -c safemultiply.c -o safemultiply.o

safeint.o: safeint.c safeint.h
	gcc -c safeint.c -o safeint.o

clean:
	del /f /q *.o *.exe