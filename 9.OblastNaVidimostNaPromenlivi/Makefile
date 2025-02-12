all: taskmanager.exe

taskmanager.exe: processes.o taskmanager.o
	gcc -o taskmanager.exe processes.o taskmanager.o

processes.o: processes.c processes.h
	gcc -c processes.c -o processes.o

taskmanager.o: taskmanager.c processes.h
	gcc -c taskmanager.c -o taskmanager.o

clean:
	del /f /q *.o taskmanager.exe