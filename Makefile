strFuncsTest: strFuncsTest.o tddFuncs.o linkedListFuncs.o strFuncs.o 
	g++ -o strFuncsTest strFuncsTest.cpp tddFuncs.cpp linkedListFuncs.cpp strFuncs.cpp

tests: strFuncsTest
	./strFuncsTest 1
	./strFuncsTest 2 
