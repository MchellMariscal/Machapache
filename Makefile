bin/cow : src/spaceinvaders.cpp include/*
	c++ src/spaceinvaders.cpp -o bin/spaceinvaders -lcurses -I include

run : bin/spaceinvaders
	./bin/spaceinvaders