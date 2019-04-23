.PHONY:clean all

WORKDIR=.
#VPATH=$(WORKDIR)/src
VPATH=$(WORKDIR)
CC=g++
#CFLGS= -Wall -g -I$(WORKDIR)/incl
CFLGS= -Wall -g -I$(WORKDIR)
#LIBFLAG = -L$(WORKDIR)/lib
LIBFLAG = -L$(WORKDIR)
BIN=main

#all 表示最终要生成的文件
all:$(BIN)

#根据.o文件或者库生成最终可执行文件
main:main.o uf_set.o
	$(CC) $(LIBFLAG) $(CFLGS) $^ -o $@ 

#自动将本路径下的.cpp文件编译成.o文件
%.o:%.cpp
	$(CC) $(CFLGS) -c $< -o $@

clean:
	rm -f *.o $(BIN)
