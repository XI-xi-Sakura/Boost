PARSER=parser

cc=g++

.PHONY:all
all:$(PARSER)

$(PARSER):parser.cc
	$(cc) -o $@ $^ -lboost_system -lboost_filesystem -std=c++11

.PHONY:clean
clean:
	rm -f $(PARSER)