# Makefile for building RogConv

clean:
	@ rm -f /usr/local/bin/rogconv

install:
	@ gcc -o rogconv main.c number_convertions.c degree_convertions.c distance_convertions.c weight_convertions.c
	@ mv rogconv /usr/local/bin/

