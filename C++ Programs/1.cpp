/*Given an integer array of size 2N + 1. In this given array, N numbers are present twice and one number is present only once in the array.
You need to find and return that number which is unique in the array.
Sample Input :
7
2 3 1 6 3 6 2
Sample Output :
1*/

#include<iostream>
#include <algorithm>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}


int FindUnique(int * arr, int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int i, j;  
    for (i = 0; i < size-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < size-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
        int k=0;
    int j1=1;
    for(k=0;k<=size;k=k+2)
    if(arr[k]==arr[j1]){
        j1=j1+2;
    }
    else
        return arr[k];
    
}


