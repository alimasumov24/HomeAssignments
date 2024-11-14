
# Makefile для проекта Transformer с использованием переменных

# Компилятор и флаги компиляции
CXX = g++
CXXFLAGS = -Wall -Werror -Wpedantic -std=c++17
LDFLAGS = -lgtest -lgtest_main -pthread

# Исходные файлы и объекты
SRCS = main.cpp Transformer.cpp Autobot.cpp Decepticon.cpp Maximal.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
TEST_SRCS = test_transformers.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

# Исполняемые файлы
TARGET = transformers
TEST_TARGET = test_transformers

# Сборка всех целей
all: $(TARGET) $(TEST_TARGET)

# Сборка основного исполняемого файла
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Сборка тестового исполняемого файла
$(TEST_TARGET): $(TEST_OBJS) $(filter-out main.o,$(OBJS))
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Правила для компиляции отдельных объектных файлов
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Очистка
clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

.PHONY: all clean
