CC = g++ 

LDLIBS = -lglut -lGL -lGLU -lX11 -lm libSOIL.a
OPT= -O3
SRCS= main.cc init.cc keyboard.cc display.cc DiceFunc.cc editorDisplay.cc die.cc
OBJS= $(SRCS:.cc=.o) 
DEFS= -DLIGHTING -DTEXTURE

 
dice: $(OBJS)
	$(CC) $(OPT) $^ -o $@ $(LDLIBS)

DDD.o: main.cc libSOIL.a
	$(CC) -c DDD.cc

init.o: init.cc  libSOIL.a
	$(CC) -c init.cc

display.o: display.cc libSOIL.a
	$(CC) -c display.cc

editorDisplay.o: editorDisplay.cc libSOIL.a
	$(CC) -c editorDisplay.cc


keyboard.o: keyboard.cc
	$(CC) -c keyboard.cc

GUI.o: GUI.cc libSOIL.a
	$(CC) -c GUI.cc

die.o: die.cc
	$(CC) -c die.cc

DiceFunc.o: DiceFunc.cc
	$(CC) -c DiceFunc.cc

all: dice

clean:
	$(RM) dice *.o *~
