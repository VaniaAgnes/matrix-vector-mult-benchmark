main:
	gcc -o main_test.exe main_test.c utils/utils.c mylib/mylib.c
    main_test.exe

time:
	gcc -o main_b_time.exe main_b_time.c utils/utils.c mylib/mylib.c
	main_b_time.exe <integer>
#example: main_b_time.exe 10000

space:
	gcc -o main_b_space.exe main_b_space.c utils/utils.c mylib/mylib.c
	main_b_space.exe <integer>
#example:main_b_space.exe 10000

clean:
	rm -f *.o
	rm -f *.out
