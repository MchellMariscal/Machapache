br  : clean compilar ejecutar

compilar : src/main.cpp
	g++ src/main.cpp -o bin/mascota -I include

ejecutar : bin/mascota
	./bin/mascota

clean : bin/mascota
	rm bin/mascota
