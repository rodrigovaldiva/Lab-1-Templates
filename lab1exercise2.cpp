/*Write a program to read 3 sensors data stored in a text file. Each measurement 
from 3 sensors are stored on a separate line. The first line contains the number 
of records in the file. Use dynamic memory allocation to initialize arrays. For 
example, sample data is in the following format:

3
1.22   1.44   1.55
1.44   1.45   1.67
1.24   1.46   1.56

*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){

    // open file (take in 1st command line argument for file name)
    ifstream inFile;
    inFile.open("sensorData.txt");

    if(inFile.fail()){
        cout << "File \"" << argv[1] << "\" does not exist\n";
        exit(-1);
    }

    
    // Declare two integer variables rows and cols and initializes cols to 3.
    // Read an integer value from an input file (inFile) and assign it to the rows variable. 
    // This value represents the number of rows that will be read from the file.

    // Dynamically allocate memory for a 2D array called 'sensorData' using pointers. 
    // The array has 'rows' rows and 'cols' columns. Each row is represented as an array of float values.


    // next we read the file and we're done
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           // Reads data from the input file into the sensorData array in a nested loop
        }
    }

    // now to deallocate memory
    for(int i = 0; i < rows; i++) delete[] sensorData[i]; // deallocate individual rows
    delete[] sensorData; // deallocating master row

    return 0;
}
