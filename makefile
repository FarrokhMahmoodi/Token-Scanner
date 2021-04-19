all:
	gcc -g main.c scanner.c testscanner.c -o scanner
clean:
	rm -rf scanner