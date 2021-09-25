/*********************
* Your comment header here.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    cout << "My Command line anazyler..." << endl;
    cout << "The number of command line parameters are: " << argc << endl;
    
    int count = 0;
    while(argv[0][count] != '\0'){
        count++;
    }
    cout << "The length of the name of the program is " << count << endl;
    
    if (argc > 1){
    	std::cout << "The length of the program is " << string_length(argv[0]) << std::endl;
    	}

    return 0;
}
