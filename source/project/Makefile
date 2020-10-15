all: all.out 
all.out : App.o Updates.o playstoredbtest.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
playstoredbtest.o : playstoredbtest.cpp Updates.h App.h 
	g++ $< -c
Updates.o : Updates.cpp Updates.h
	g++ $< -c    
App.o : App.cc App.h
	g++ $< -c
clean:
	rm -rf *.o *.out
