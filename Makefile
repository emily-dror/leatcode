CXX := clang++
CXXFLAGS := -std=c++11
BIN := main

merge:
	$(CXX) $(CXXFLAGS) merge.cpp -o $(BIN)

clean:
	rm -rf $(BIN) *.o
