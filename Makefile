all: Calc.o Convert.o m_string.o main.o run
Calc.o: Calc.c Calc.h
	gcc -c Calc.c
Convert.o: Convert.c Convert.h
	gcc -c Convert.c
m_string.o: m_string.c m_string.h
	gcc -c m_string.c
main.o: main.c Calc.h Convert.h m_string.h
	gcc -c main.c
run: main.o Calc.o Convert.o m_string.o
	gcc main.o Calc.o Convert.o m_string.o -o run
