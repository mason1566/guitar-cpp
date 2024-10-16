default: build-run

main: *.cpp *.h
	g++ -o main *.cpp *.h


build-run: main
	@./main