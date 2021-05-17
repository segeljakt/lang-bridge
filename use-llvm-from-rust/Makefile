all:
	clang -c hello.c -o hello.o && \
	llvm-ar rc libhello.a hello.o

clean:
	rm libhello.a
	rm hello.o
