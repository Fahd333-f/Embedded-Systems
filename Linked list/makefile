
proj=ex3

main: $(proj).exe
	@echo "*********************ALL STAGES COMPLETED**********************"
	@.\$(proj).exe
	@echo "*********************RUNNING DONE******************************"

$(proj).i : $(proj).c
	@gcc -E -o $(proj).i $(proj).c
	@echo "*********************PREPROSSING DONE**********************"

$(proj).s : $(proj).i
	@gcc -S -o $(proj).s $(proj).i
	@echo "*********************COMPILATION DONE**********************"

$(proj).o : $(proj).s
	@gcc -c -o $(proj).o $(proj).s
	@echo "*********************ASSMPLING DONE**********************"

$(proj).exe : $(proj).o
	@gcc $(proj).o -o $(proj).exe
	@echo "*********************LINKING DONE**********************"
clean:
	@del $(proj).i $(proj).s $(proj).o $(proj).exe
	@echo "*********************OLD FILES DELETED**********************"