Employee:employee.o main.o
	gcc -o work employee.o main.o
main.o: main.c
	gcc -c main.c
Employee.o: employee.c
	gcc -c Employee.c

clean:
	rm work* .o