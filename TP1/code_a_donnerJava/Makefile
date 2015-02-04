all: cbuild

cbuild: arc
	javac -cp bin -sourcepath src -d bin src/tsp/MainTSP.java

test: test-h1 test-h2

test-h1:cbuild
	java -cp bin/ tsp.MainTSP -h1 ../data/instances/kroD100.tsp

test-h2:cbuild
	java -cp bin/ tsp.MainTSP -h2 ../data/instances/kroD100.tsp

arc:
	javac -cp bin -sourcepath src -d bin src/tsp/Arc.java
