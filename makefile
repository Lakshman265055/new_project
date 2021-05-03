
lucky.exe: avg.c grade.c main.c
	gcc avg.c grade.c main.c -o lucky.exe

run:lucky.exe
	lucky.exe

clean:
	rm lucky.exe
	rm -rf html

test:avg.c grade.c main.c test.c
	gcc test.c avg.c grade.c unity.c -o test.out

cov:
	gcc -fprofile-arcs -ftest-coverage test.c avg.c grade.c unity.c -o test.exe
	#after gcno file is generated..
	gcov test.c avg.c grade.c unity.c

analysis: test.c avg.c grade.c unity.c main.c
	cppcheck --force enable=all $^
