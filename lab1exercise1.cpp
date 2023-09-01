/*Write a program that dynamically resize an array to a bigger size. The program creates 
an array of an arbitrary size (specified by the user). Then the user may extend the array 
to a bigger size (this involves creating a temporary array with larger size, copying the 
values of the elements, and adding new values into the extension cells). Print the new 
array to the user to confirm the functionality.*/
#include <iostream>

using namespace std;

template <typename T>
void printArray(T arr, int size){
    for(int i = 0; i < size; i++) cout << arr[i] << ' ';
    cout << '\n';
}

int main(int argc, char *argv[]){
    // fun fact: argc stands for ARGument Count
    // and argv stands for ARGument Vector

    //Declare an integer variable that will be used to store the size of the array

    cout << "Give me initial size of array\n";
    // Get the size of the array from the user and save it in the variable you declared

    
    // The line below declares a pointer variable named array that can store the memory address of the beginning of the array.
    // new char[size]: This is a dynamic memory allocation statement. 
    // It allocates a block of memory on the heap (i.e., the memory managed by the program during runtime) 
    // to store an array of characters. 
    char *array = new char[size];

    // Write a for loop that will initialize the array with the English Alphabet: A, B, C, D ... until the size that the user
    // specified is reached 
    

    //int newSize;
    cout << "Give me new size for the array\n";
    // Get the new size of the array from the user and save it in the variable you declared

    //declare a temporary pointer variable named temp to be used to copy elements from the previously declared array 
    char *temp = new char[newSize];

    // Use a for loop to copy the already existing elements of the first array into the temporary array
    // note we only go until size since we only have 'size' number of elements

    // add the extra characters to the temporary array according to the newsize that the user has provided
    
    
    // Use the delete [] function in c++ to deallocate memory for old array since we no longer have any need of it.
   
    /*note that we must do this before we transfer the pointer otherwise, we have
    no way of keeping track of where the old memory is*/

    // now, set the array pointer to be equal to temp (because we want our original array to be resized)
    

    // for good measure
    temp = nullptr;

    //using the printArray function above, print the elements of the 'array' after resizing it

    return 0;
}
