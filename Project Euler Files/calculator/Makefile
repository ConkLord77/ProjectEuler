CC = g++
exe_file = calc
$(exe_file): calc.o prog.o
	$(CC) calc.o prog.o -o $(exe_file)
calc.o: calc.cpp
	$(CC) -c calc.cpp
driver.o: main.cpp
	$(CC) -c main.cpp
clean:
	rm –f *.out *.o $(exe_file)
