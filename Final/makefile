#links titan and CinReader
titantest: titan.o CinReader.o
	g++ -Wall -g -o titantest titan.o CinReader.o
	
#creates the rocketship object
rocketshiptest: rocketship.cpp rocketship.h
	g++ -Wall -g -c rocketship.cpp
	
#creates the specialrocket object
specialrocketshiptest: specialrocketship.cpp specialrocketship.h
	g++ -Wall -g -c specialrocketship.cpp
	
#creates the activator object
activatortest: activator.cpp activator.h
	g++ -Wall -g -c activator.cpp
	
#creates the saturn unit test object
saturn_unit_test: saturn_test.cpp
	g++ -Wall -g -c saturn_test.cpp

#creates the saturn rocket unit test executable
saturnrockettest: saturn_test.o rocketship.o
	g++ -Wall -g -o saturnrockettest saturn_test.o rocketship.o
	
#creates the saturn rocketship executable
saturntest: saturn.o rocketship.o CinReader.o
	g++ -Wall -g -o saturntest saturn.o rocketship.o CinReader.o

#creates the jupiter unit test object file
jupiter_unit_test: jupiter_test.cpp
	g++ -Wall -g -c jupiter_test.cpp

#creates the jupiter rocket unit test executable
jupiterrockettest: jupiter_test.o rocketship.o
	g++ -Wall -g -o jupiterrockettest jupiter_test.o rocketship.o
	
#creates the jupiter rocketship executable
jupitertest: jupiter.o rocketship.o CinReader.o
	g++ -Wall -g -o jupitertest jupiter.o rocketship.o CinReader.o

#creates the mars unit test object file
mars_unit_test: mars_test.cpp
	g++ -Wall -g -c mars_test.cpp

#creates the mars rocket unit test executable
marsrockettest: mars_test.o rocketship.o specialrocketship.o
	g++ -Wall -g -o marsrockettest mars_test.o rocketship.o specialrocketship.o
	
#creates the mars rocketship executable
marstest: mars.o rocketship.o specialrocketship.o CinReader.o
	g++ -Wall -g -o marstest mars.o Rocketship.o specialrocketship.o CinReader.o
	
#creates the earth unit test object file
earthunittest: earth_test.cpp
	g++ -Wall -g -c earth_test.cpp

#creates the earth rocket unit test executable
earthrockettest: earth_test.o activator.o
	g++ -Wall -g -o earthrockettest earth_test.o activator.o
	
#creates the earth rocketship executable
earthtest: earth.o rocketship.o activator.o CinReader.o
	g++ -Wall -g -o earthtest rocketship.o earth.o activator.o CinReader.o

#creates the megaweapon executable
weapontest: megaweapon.o CinReader.o
	g++ -Wall -g -o weapontest megaweapon.o CinReader.o
	
clean:
	rm *test	
