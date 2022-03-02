//A program to read the matrix of size mxn from keyboard and display the same using functions..
#include <iostream>
#include<stdlib.h>
using namespace std;
#define m 3
#define n 3
class matrix
{
    // Data member -
    int array[m][n]; 
                    /*a 2D array to store the elements of a matrix..*/
    public:

    //Member functions 
    void getMatrix(int ,int );   //a funcion to read the matrix from keyboard
    void displayMatrix();        //a function to display the matrix.

};

void matrix::getMatrix(int row,int column) /*getMatrix function takes 2 arguments from the user 
                                              and stores into the data member array.*/
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<"Enter element ["<<i<<"]"<<"["<<j<<"] >>";
            cin>>array[i][j];
        }
        cout<<"\n";
    }
    
}
void matrix::displayMatrix(void)  /*displayMatrix function displays the content of matrix
                                     stored in the data member array by user.*/ 
{
    cout<<"Matrix :\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}
int main(void)    //Driver function.
{
    matrix A;      
    A.getMatrix(m,n);   
    A.displayMatrix();
    
    return 0;
}