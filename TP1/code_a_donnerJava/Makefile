all: cbuild

cbuild: 
	javac -cp bin -sourcepath src -d bin src/tsp/MainTSP.java

test:	cbuild
	java -cp bin/ tsp.MainTSP -h1 ../data/instances/kroD100.tsp
