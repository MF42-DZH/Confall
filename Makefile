OBJS   = main.o colrdef.o game.o
CC     = gcc
CFLAGS  = -std=c18 -Wall -Wno-unused-function

LDFLAGS :=
ifeq ($(OS),Windows_NT)
	LDFLAGS += -lpdcurses
else
	LDFLAGS += -lncursesw
endif

RM :=
ifeq ($(OS),Windows_NT)
	RM += del /F
else
	RM += rm -f
endif

EXT :=
ifeq ($(OS),Windows_NT)
	EXT = .exe
else
	EXT = .out
endif

TARGET      := Confall$(EXT)
TARGETDEBUG := Confall-DEBUG$(EXT)

all: flags-release $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

debug: flags-debug $(TARGETDEBUG)

$(TARGETDEBUG): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

flags-release:
	$(eval CFLAGS += -Ofast)

flags-debug:
	$(eval CFLAGS += -O0 -Wextra -D DEBUGGING)

clean:
	$(RM) $(OBJS) $(TARGET)

clean-debug:
	$(RM) $(OBJS) $(TARGETDEBUG)

clean-all:
	$(RM) $(OBJS) $(TARGET) $(TARGETDEBUG)

rebuild: clean all

rebuild-debug: clean-debug debug
