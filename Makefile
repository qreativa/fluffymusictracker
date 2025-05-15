SRC_DIR = src
BUILD_DIR = build

CC	= g++
FILES	= $(wildcard $(SRC_DIR)/*.cpp $(SRC_DIR)/*.c)
FLAGS	= -std=c++23 -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
EXE	= $(BUILD_DIR)/fmt

$(EXE): $(FILES)
	$(CC) $(FILES) $(FLAGS) -o $(EXE)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
