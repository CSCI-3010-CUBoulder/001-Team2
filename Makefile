# Compiler 
CXX = g++ 
# Flags, using C++17 
CXXFLAGS = -std=c++17 -Wall 
# make all
all: main
# make main 
main: 
	$(CXX) $(CXXFLAGS) test.cpp -o test
# make clean
clean:
	rm test
