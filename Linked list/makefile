
proj=ex1
CC=gcc
main: $(proj).exe
	@echo "*********************ALL STAGES COMPLETED**********************"
	@.\$(proj).exe
	@echo "*********************RUNNING DONE******************************"

$(proj).i : $(proj).c
	@CC -E -o $(proj).i $(proj).c
	@echo "*********************PREPROSSING DONE**********************"

$(proj).s : $(proj).i
	@CC -S -o $(proj).s $(proj).i
	@echo "*********************COMPILATION DONE**********************"

$(proj).o : $(proj).s
	@CC -c -o $(proj).o $(proj).s
	@echo "*********************ASSMPLING DONE**********************"

$(proj).exe : $(proj).o
	@CC $(proj).o -o $(proj).exe
	@echo "*********************LINKING DONE**********************"
clean:
	@del $(proj).i $(proj).s $(proj).o $(proj).exe
	@echo "*********************OLD FILES DELETED**********************"