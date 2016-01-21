all: plot.png 

plot.png:	Punto3.py data.txt 
	python Punto3.py

data.txt: Punto2.x
	./Punto2.x >> data.txt

Punto2.x: Punto2.c
	cc Punto2.c -o Punto2.x

clean: 
	rm -f plot.png data.txt
