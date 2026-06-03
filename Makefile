CC = gcc
SRC = src/main.c src/graph.c src/bfs.c
OUT = graph_finder

all:
	$(CC) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
