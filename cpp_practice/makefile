CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= cpp_practice.cpp array.cpp Tree.cpp stdafx.cpp StacksQueues.cpp LinkedList.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=cpp_practicee

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJECTS) $(EXECUTABLE)
