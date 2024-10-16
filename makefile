default: main

main: main.cpp
	g++ -o main main.cpp

build-run: main
	@./main