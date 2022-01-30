EXE:=exe
$(EXE): class.cpp
	g++ $^ -o $@

clean: 
	rm $(EXE)
