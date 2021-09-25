/*********************
* Your comment header here.
**********************/

#include "main.h"

int main(int argc, char** argv) {

    cout << "My Command line anazyler..." << endl;

    //test and report the number of command line parameters
    cout << "The number of command line parameters are: " << argc << endl;
    
    //test and report the length of the program name
    int count = 0;
    while(argv[0][count] != '\0'){
        count++;
    }
    cout << "The length of the name of the program is " << count << endl;
    
    //loop through and report the length of each command line parameter except the name
    if (argc > 1){
    
    	
    	for(int i=1; i<argc; i++){
    		int length = 0;
    		while(argv[i][length] != '\0'){
        	length++;
    	}
            cout << "The length of the parameter " << i << " is " << length << endl;
    	}
  
    }

    return 0;
}
