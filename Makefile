main: mylib.o utils.o
	gcc -o main_test.out main_test.c mylib/mylib.o utils/utils.o

time: mylib.o utils.o
	gcc -o main_b_time.out main_b_time.c mylib/mylib.o utils/utils.o

space: mylib.o utils.o
	gcc -o main_b_space.out main_b_space.c mylib/mylib.o utils/utils.o

mylib.o:
	gcc -o mylib/mylib.o -c mylib/mylib.c

utils.o:
	gcc -o utils/utils.o -c utils/utils.c

clear:
	rm -f *.o
	rm -f *.out
