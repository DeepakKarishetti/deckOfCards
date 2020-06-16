# Deck of Cards


## Project structure:
``` The code in this project is organized as shown:```


    .
		 ├── build                   # Compiled files 
		 ├── src            	     # Source files
		 ├── test           	     # Automated tests
		 ├── CMakeLists.txt          # High-level CMake file for the entire project
		 ├── LICENSE                 
		 ├── README.md          	  		     	 
		 ├── .gitignore
    

## Code developed platform:
```
- Ubuntu 16.04
- C++ 11, gcc version 6.5.0, cmake version 3.5
- Googletest (gtest)
```

## Requirements:
```
- C++ 11 
- CMake version 3.5+
- Googletest  
```

### CMake [source](https://cmake.org/)
```
- CMake version of 3.5+ is recommended

	$ sudo apt-get -y install cmake
```

### Googletest [source](https://github.com/google/googletest)
 ```
- A testing and mocking framework developed by google.
 ```

- Installation:
 	```
 		$ sudo apt-get install libgtest-dev
 		$ sudo apt-get install cmake
 		$ cd /usr/src/gtest
 		$ sudo cmake CMakeLists.txt
 		$ sudo make
		$ sudo cp *.a /usr/lib
 	```


## Source files description:
```
- main.cpp => top level file that runs the overall algorithm
- cards.h => contains the high level data abstraction with declaration of function prototypes
- cards.hpp => contains the corresponding functions definitions
```
- The tests for the corresponding member functions named by their function name are placed under the folder "test"  

## How to build and run:
```
	$ git clone https://github.com/DeepakKarishetti/deckOfCards.git
	$ cd build
	$ cmake ../ 
	$ make && ./bin/cards
	
	- Give in an input value to the prompt on the terminal


	$ ./bin/<unit-test-exe> // for unit test results for corresponding member functions
	
	- Ex: ./bin/test_getCurCardNum
```

## Inputs:
```
 - The program requires a user input, to specify the number of cards to be drawn from the deck
 - The input must be a positive integer, else it would be warned on the command line
```

## Outputs:
```
- The output generated are displayed for the user input for the number of cards to be drawn
- "bin" folder in build contains all the executables generated, including unit tests

- The output display shows the cards that are randomly drawn from the deck of cards after shuffling

- The output displayed contains three colums:
	- The first column denotes the count number of the cards drawn
	- The second column denotes the drawn card face value/rank
	- The third column denotes the suit of the drawn card

- The cards are drawn upto 52 cards after the shuffle with the user input
- If a value of 53 and above is given, there will not be any cards left to be returned after 52 cards
- It will be displayed as "No more cards to draw!"
```

## Note:
```
- All the input and output file paths are hard-coded, changing the file paths will break the code.
- Running the executable has to be made from the build folder as ./bin/<exe-name> due to above reason.
- The folder "build" is initially empty and is used to compile the program from that directory
- Once the code is compiled all the executable files are saved in the folder "/build/bin".
```

> Please let me know if you have any questions or suggestions at: ```r10.deepak@gmail.com```
