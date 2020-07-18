WIN = i686-w64-mingw32-g++
CC = g++
CFLAGS = -c
LIBS = 
DEPS = vec2.h 
OBJ =  vec2.o vec2_sample.o
EXEC = ./vec2_sample


%.o: %.cpp $(DEPS)
		$(CC) $(CFLAGS) -o $@ $<

vec2_sample: $(OBJ)
		$(CC) -o $@ $^ $(LIBS)

run: vec2_sample
		$(EXEC)

clean:
		rm -rf *.o vec2_sample

