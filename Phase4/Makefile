clean:
	rm -rf *.out
	rm -rf *~
	rm -rf *.c
	rm -rf *.output
	rm -rf *.o
killtxt:
	rm -rf *.txt
all:
	flex --outfile=lex.c al.l
	bison --yacc --defines --output=parser.c parser.y -v
	gcc -g -o a.out lex.c parser.c
