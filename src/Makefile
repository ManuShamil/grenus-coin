CC = g++

clean:
	-rm transaction.o
	-rm block.o
	-rm chain.o

all:
	$(CC) -c Transaction\transaction.cpp
	$(CC) -c Block\block.cpp
	$(CC) -c Chain\chain.cpp

	$(CC) transaction.o block.o chain.o main.cpp -o ../$(BUILD)/$(EXECUTABLE)

	make clean