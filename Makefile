bin/mascota : src/mascota.cpp include/mascota.hpp include/Enyrendador.hpp
	"Compilando Mascota"
	rm bin/mascota
	g++ src/main.cpp -o bin/mascota -I include


bin/spacerace : src/spacerace.cpp
	