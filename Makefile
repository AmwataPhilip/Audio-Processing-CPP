CC = g++ -std=c++11
BIN = bin
SRC = src
RES = results
TARGETS = samp
OBJECTS = Samp.o Audio.o
SOURCES = $(SRC)/Samp.cpp $(SRC)/Audio.cpp

$(TARGETS): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGETS)
	mv $(OBJECTS) $(BIN)/
	mv $(TARGETS) $(BIN)/

$(OBJECTS): $(SOURCES)
	$(CC) -c $(SOURCES)


clean:
	rm -r $(BIN)/*

run: $(TARGETS)
	./$(BIN)/$(TARGETS)
