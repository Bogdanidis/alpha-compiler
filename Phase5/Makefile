all:
	flex --outfile=lex.c al.l
	bison --yacc --defines --output=parser.c parser.y -v
	gcc -g -o a.out lex.c parser.c -lm
clean:
	rm -rf *.out
	rm -rf *~
	rm -rf *.c
	rm -rf parser.output
	rm -rf parser.h
	rm -rf BinaryCode.abc
	rm -rf *.o
killtxt:
	rm -rf *.txt
