all: main.c Sources/Gerador_Quadro.c
	gcc main.c -o EXEC Sources/Gerador_Quadro.c
 
run: EXEC
	./EXEC
