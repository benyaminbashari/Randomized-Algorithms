out: main.o sort_algorithms.o
	g++ main.o sort_algorithms.o -o out
main.o: main.cpp sort_algorithms.h inputs/test_gen.h
	g++ -c main.cpp
sort_algorithms.o: sort_algorithms.cpp sort_algorithms.h ../testlib.h
	g++ -c sort_algorithms.cpp


clean:
	rm *.o out