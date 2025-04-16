SSVR=search_server
cc=g++

# 指定头文件搜索路径
CFLAGS=-I/home/ubuntu/Boost/cppjieba/include/cppjieba

.PHONY:all
all: $(SSVR)


$(SSVR): server.cc
	$(cc) -o $@ $^ -ljsoncpp -std=c++11

.PHONY:clean
clean:
	rm -f search_server