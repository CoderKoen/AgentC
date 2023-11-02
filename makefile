CC = g++
FILES = src/main.cpp
OUT_DIR = bin
OUT_NAME = agentc.elf
FLAGS = -Wall

agentc:
	$(CC) $(FILES) -o $(OUT_DIR)/$(OUT_NAME) $(FLAGS)

clean:
	rm $(OUT_DIR)/$(OUT_NAME)