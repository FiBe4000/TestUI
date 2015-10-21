IDIR = include
EXE = ui
CC=g++
CFLAGS=-I $(IDIR)

ODIR = obj
SDIR = src
LIBS =  -lsfml-graphics -lsfml-window -lsfml-system

_DEPS = Engine.hpp State.hpp 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o Engine.o State.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(EXE): $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~ $(EXE)

