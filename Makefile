Gpp=g++
srcs=$(wildcard *.cpp) $(wildcard */*.cpp) 
objs=$(srcs:.cpp=.o)
deps=$(srcs:.cpp=.d)
INC=-Ilib -Isrc

all: test
	@echo $(srcs)

test: $(objs)
	$(Gpp) $^ -o $@

%.o: %.cpp
	$(Gpp) -MMD -MP $(INC) -c $< -o $@

.PHONY: clean

# $(RM) is rm -f by default
clean:
	$(RM) $(objs) $(deps) test

-include $(deps)
