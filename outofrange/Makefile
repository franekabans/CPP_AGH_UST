#Prawa autorskie Kamil MArks xd

CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -g
FNAME=bib
SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o) 

all : $(FNAME)

$(FNAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $? -o $@

$(OBJ) : $(SRC)
	$(CXX)  -c $(CXXFLAGS) $*.cpp -o $@



clean:
	rm -rf $(FNAME) *.o

rr: clean all

mem:
	valgrind --log-fd=1 ./$(FNAME)| grep "lost"

new:
	  @read -p  "Nazwa nowej klasy: " module; \
	touch $$module.h $$module.cpp; \
	echo "#pragma once" > $$module.h; \
	echo "" >> $$module.h; \
	echo "class $$module{" >> $$module.h; \
	echo "" >> $$module.h; \
	echo " public:" >> $$module.h; \
	echo "" >> $$module.h; \
	echo " private:" >> $$module.h; \
	echo "" >> $$module.h;\
	echo "};" >> $$module.h; \
	echo "#include \"$$module.h\"" > $$module.cpp; \


save:
	number=`ls -ld */ | wc -l`; \
	number=`expr $$number + 1`; \
	mkdir wersja$$number; \
	cp *.cpp *.h Makefile wersja$$number; \
	echo "$$number"; \

