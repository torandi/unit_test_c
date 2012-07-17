all: libunittest.a

clean: 
	rm -rf unit_test.o sh_colors.o lib/

lib:
	mkdir -p lib

libunittest.a: lib unit_test.o sh_colors.o
	ar rcs lib/libunittest.a unit_test.o sh_colors.o

unit_test.o: unit_test.c
sh_colors.o: sh_colors.c sh_colors.h
