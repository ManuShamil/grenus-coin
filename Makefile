CC = g++
BUILD = build
EXECUTABLE = blockchain.exe

export

clean:
	- rm $(BUILD)/$(EXECUTABLE)

all: clean
	+$(MAKE) all -C src
