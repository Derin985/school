all : safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeint.o : safeint.h safeint.c
	gcc -c safeint.c -o safeint.o

safeadd.exe : safeadd.c safeint.o safeint.h
	gcc safeint.o safeadd.c -o safeadd.exe

safesubtract.exe : safesubtract.c safeint.o safeint.h
	gcc safeint.o safesubtract.c -o safesubtract.exe

safemultiply.exe : safemultiply.c safeint.o safeint.h
	gcc safeint.o safemultiply.c -o safemultiply.exe

safedivide.exe : safedivide.c safeint.o safeint.h
	gcc safeint.o safedivide.c -o safedivide.exe

clean:
	del -f *.exe *.o
