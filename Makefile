CC = g++ -std=c++11
BIN = bin
SRC = src
RES = results
TARGETS = samp
OBJECTS = $(SOURCES:.cpp=.o)
SOURCES = $(SRC)/*.cpp

$(BIN)/$(TARGETS): $(OBJECTS)
	$(CC) -o $@ $ˆ


$(BIN)/%.o: $(SRC)/%.cpp
	$(CC) -c $< -o $@

clean:
	rm -r $(BIN)/*

run: $(TARGETS)
	./$(BIN)/$(TARGETS)
