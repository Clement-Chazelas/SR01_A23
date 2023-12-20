#CC=gcc
#SRC = $(wildcard *.c)

#OBJ = $(SRC:.c=.o)

#%.o: %.c $(SRC)
#	$(CC) -c -o $@ $< 

#teststring: $(OBJ)
#	$(CC) -o $@ $^ 	

#clean:
#	rm -f *.o teststring


principal: teststring.o mystrchrn.o mystrinv.o mystrncpy.o mystrupdown.o mystrncat.o
	gcc -o principal teststring.o mystrchrn.o mystrinv.o mystrncpy.o mystrupdown.o mystrncat.o

teststring.o: teststring.c mystrchrn.h mystrinv.h mystrncpy.h mystrupdown.h mystrncat.h
	gcc -c teststring.c

mystrchrn.o: mystrchrn.c mystrchrn.h
	gcc -c mystrchrn.c

mystrinv.o: mystrinv.c mystrinv.h
	gcc -c mystrinv.c

mystrncpy.o: mystrncpy.c mystrncpy.h
	gcc -c mystrncpy.c

mystrupdown.o: mystrupdown.c mystrupdown.h
	gcc -c mystrupdown.c

mystrncat.o: mystrncat.c mystrncat.h
	gcc -c mystrncat.c

clean:
	rm -f  *.o principal
