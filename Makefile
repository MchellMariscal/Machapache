CXX = x86_64-w64-mingw32-g++
br: clean compilar ejecutar

compilar: src/SpaceInvaders.cpp
	$(CXX) src/SpaceInvaders.cpp -o bin/SpaceInvaders -I include

ejecutar: bin/SpaceInvaders
	./bin/SpaceInvaders

clean: bin/SpaceInvaders
	rm bin/SpaceInvaders

bin/SpaceInvaders : src/SpaceInvaders.cpp include/*
	c++ src/SpaceInvaders.cpp -o bin/SpaceInvaders -lcurses -I include

run : bin/SpaceInvaders
	./bin/SpaceInvaders