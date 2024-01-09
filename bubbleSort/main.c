// Created by Mehmet Akif Duran, 9 Jan 2024.
// Showing bubble sort inside in a main function and a user-defined function.
#include <stdio.h>
#include <stdlib.h>


// Defining size of the array as a variable so user can change it and he/she can use it with whatever number he/she wants.

#define ARRAY_SIZE 10

// I will show in the bubble sort algorithm inside of this main function, you can find the user defined function at the below inside of the comment lines.


int main (void){
    
    //Variable Decleration(s).
    
    int temp = 0 ; // You have to define the store the data while bubble sorting.
    int i,j; // Counters for the for loops.
    
    int array[ARRAY_SIZE] = {0,9,2,1,3,6,4,8,5,7};
    
    // Executable Statment(s)
    
    
    for(i=0; i<ARRAY_SIZE;i++){
        
        for(j=0; j<ARRAY_SIZE-1 ; j++)
        {
            
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
        }
            
        }
}
    
    
    for(i=0; i<ARRAY_SIZE; i++) {
        printf("%d\n",array[i] ); //adding spcaces for readability.
    }
    
    return 0;
   
}

/*
void bubbleSort(int arr[], int arraySize){
    
    // Variable decleration(s)
    
    int count; int counter; // counters for the for loops.
    int x; // x is for the temp value
    
    // Executable statement(s)

    for(count=0;count<ARRAY_SIZE;count++){
        for(counter=0; counter<ARRAY_SIZE-1; counter++){
            if(arr[counter]<arr[counter+1]){
                x = arr [counter];
                arr[counter] = arr[counter+1];
                arr[counter+1] = x;
            }
        }
    }
    for(counter = 0 ; counter<ARRAY_SIZE; counter++){
        printf("%d\n", arr[counter]);
    }
    
    
}
*/


