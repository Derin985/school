all : help.exe strlength.exe strconcat.exe strcompare.exe

help.exe : help.c
	gcc help.c -o help.exe

mystrings.o : mystrings.h mystrings.c
	gcc -c mystrings.c -o mystrings.o

strlength.exe : strlength.c mystrings.o mystrings.h
	gcc mystrings.o strlength.c -o strlength.exe

strconcat.exe : strconcat.c mystrings.o mystrings.h
	gcc mystrings.o strconcat.c -o strconcat.exe

strcompare.exe : strcompare.c mystrings.o mystrings.h
	gcc mystrings.o strcompare.c -o strcompare.exe

clean:
	del -f *.exe *.o
