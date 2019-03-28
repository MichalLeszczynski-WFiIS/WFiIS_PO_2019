
CXX = g++
EXEC = Program
CXXFLAGS = -Wall -g 

LIBS = -lm

SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)
DEPS=$(SRC:.cpp=.d)

$(EXEC): $(OBJS) 
	$(CXX) $(CXXFLAGS) $+ -o $@


*.o: *.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean run rebuild debug memcheck

rebuild: 
	make clean
	make run

clean:
	rm -f *.o
	rm -f *~
	rm -f *.d
	rm -f $(EXEC)

debug:
	gdb $(OUTPUT)
memcheck:
	valgrind --leak-check=full ./$(OUTPUT)

run: $(EXEC)
	./$(EXEC)

-include $(DEPS)
