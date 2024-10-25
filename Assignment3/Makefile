CXX = g++
CXXFLAGS = -std=c++11 -Wall


SOURCES = main.cpp Transformer.cpp Decepticon.cpp Weapon.cpp Team.cpp Predacon.cpp Autobot.cpp
OBJECTS = $(SOURCES:.cpp=.o) 


EXECUTABLE = transformer_app


$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS) $(EXECUTABLE)


.PHONY: clean