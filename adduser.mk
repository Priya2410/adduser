a.out:	main.o	password.o	shadow.o
		gcc main.o	password.o	shadow.o
main.o:	main.c	server.h
		gcc	-c	main.c	
password.o:	password.c	server.h
			gcc	-c	password.c
shadow.o:	shadow.c	server.h
			gcc	-c	shadow.c