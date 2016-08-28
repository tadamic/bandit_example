CC=gcc
CXX=g++

CPPFLAGS=-std=c++11 -Wall -g -Isrc -Ilib/bandit
SRCS=src/space_ship.cpp
OBJS=$(subst .cpp,.o,$(SRCS))

TEST_SRCS=$(SRCS) test/test_space_ship.cpp
TEST_OBJS=$(subst .cpp,.o,$(TEST_SRCS))

all: space_ship

space_ship: $(OBJS) src/main.o
	$(CXX) $(CPPFLAGS) $(LDFLAGS) -o space_ship $(OBJS) src/main.o $(LDLIBS)

test: space_ship $(TEST_OBJS) test/test_main.o
	$(CXX) $(CPPFLAGS) $(LDFLAGS) -o test_space_ship $(TEST_OBJS) test/test_main.o $(LDLIBS)

check: test
	./test_space_ship --reporter=spec

clean:
	rm -f $(OBJS) src/main.o $(TEST_OBJS) test/test_main.o test_space_ship

distclean: clean
	rm -f space_ship
