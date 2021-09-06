# Mkf

TAR=main.out
OBJ=
CC=
H=
ZNAME=HW2_2018314788.zip

all: $(TAR)

$(TAR): $(OBJ)
	g++ -g -O2 -o $(TAR) $(OBJ)

$(OBJ): $(CC)
	g++ -g -c -O2 $^

clean:
	rm $(OBJ) $(TAR)

ZIP:
	zip $(ZNAME) $(CC) $(H)

