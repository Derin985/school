all : taskmanager.exe

taskmanager.exe : taskmanager.c processes.o processes.h
	gcc taskmanager.c processes.o -o taskmanager.exe

processes.o : processes.h processes.c
	gcc -c processes.c -o processes.o

clean:
	del -f *.exe *.o