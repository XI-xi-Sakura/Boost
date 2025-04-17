HTTP_SERVER=http_server
cc=g++

.PHONY:all
all:$(HTTP_SERVER)


$(HTTP_SERVER):http_server.cc
	$(cc) -o $@ $^ -ljsoncpp -lpthread -std=c++11
.PHONY:clean
clean:
	rm -f $(HTTP_SERVER)
