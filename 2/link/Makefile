main: main.o
	g++ $< -o $@
main.o: main.cc
	g++ -c $< -o $@
	nm $@

.PHONY: run
run:
	./main

.PHONY: clean
clean:
	rm main
