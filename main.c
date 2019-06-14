#include <stdio.h>  // This is a Header to call maun function. example: prinf, scanf, etc...
#include <stdlib.h> // In this code you can Delete default header. No proble, because NOT USING IN HERE

int CekUrut(int data[],int n); // PROTOTYPE: This is a prototype, you just add SEMI COLON in the last line
int BinarySearch(int *array, int manydata, int key);//PROTOTYPEBINARY SEARCH FUNCTION
int buublesort (int *myarray, int manydata);
// Main Area
int main()
{   int loop1, loop2, swap, manydata, search;   // You just decelered Valiable
    int myarray [100];  // This is just Declered Array, with MYARRAY Name
    // In Line 11-12, This command to Output "How many data, and Input Them
        printf ("* How many data in array= ");
        scanf ("%d", &manydata);
    // LOOPING FOR INPUT, example: input Index 0, Index1, etc...
    for (loop1=0; loop1<manydata;loop1++) // Index start 0, so, We must Loop from 0 for Index 0
        {
            printf ("Input Index-%d= ", loop1);
            scanf ("%d", &myarray[loop1]);
        }

   //SEARCH INDEX
    printf ("\nSearch Index from Value before Sort= "); scanf ("%d",&search);
    for (loop1=0;loop1<manydata;loop1++)
    {
        if(myarray[loop1]==search)
        {
            printf ("Index: %d \n",loop1);
        }
    }
// BUBBLE SORT
buublesort (myarray, manydata);


    // SHOW ASCENDING OUTPUT
    printf ("\nAscending Output= \n");
    printf ("\t");
    for (loop1=0;loop1<manydata;loop1++)
        {
            printf ("%d ", myarray[loop1]);
        }



     // SHOW ASCENDING OUTPUT ONLY EVEN
    printf ("\n\nAscending Output (EVEN ONLY)= \n");
    printf ("\t");
    for (loop1=0;loop1<manydata;loop1++)
        {
            if (myarray [loop1]%2==0)
            {
                printf ("%d ", myarray[loop1]);
            }

        }
        // SHOW ASCENDING OUTPUT ONLY ODD
    printf ("\n\nAscending Output (ODD ONLY)= \n");
    printf ("\t");
    for (loop1=0;loop1<manydata;loop1++)
        {
            if (myarray [loop1]%2!=0)
            {
                printf ("%d ", myarray[loop1]);
            }

        }
// BINARY SEARCH
printf ("\nSearch Index from Value Binary Serch= "); scanf ("%d",&search);
for (loop1=0;loop1<manydata;loop1++)
BinarySearch(myarray,manydata,search);

    return 0;
}






// Function to CEK URUT

int CekUrut(int data[],int n) // Using 2 Parameter, In here Data, and Many data
{
    int i,k=0;      // Just Declered Variables
    for( i=0 ; i<n-1; i++ )
    {
      if( data[i] > data[i+1] ) // If not Sorted in ASCENDING, Du SUM
      {
         k++;
         break; // Stop
      }
    }
    // If SUM = 0; Is Return 1;
    if(k==0)
      return 1; // This just to Easy Memoriez
   else
       return 0;
}

// BINARY SEARCH FUNCTION

int BinarySearch(int *array, int manydata, int key)//
{
int  mid, loop2, low=0, high=manydata-1,test=0;

 while(low<=high)
  {
    mid=(low+high)/2;
        if(key<array[mid])
            {high=mid-1;}
        else if(key>array[mid])
            {low=mid+1;}
        else
        {
            if(key==array[mid])
                {   test++;
                    for (loop2=0;loop2<manydata;loop2++)
                    { if (array [loop2]==array [mid])
                        {printf(" The item %d is found at index %d after sorted\n ",key,loop2);
                        }

                    }
                    exit(0);
                }
        }
  }
 if(test==0)

 {printf("Item not found\n");
 exit(0);
 }
 }
// BUBBLE SORT
int buublesort (int *myarray, int manydata)
{   int loop1, loop2, swap;
        // LOOPING FOR SWAP OR BUBBLE SORT
    for (loop2=0; loop2<manydata-1;loop2++)
        {   // Condition to cek data in Sorting proccess if SORTED, do "Stop Literation if Data Sorted"
            if (CekUrut(myarray,manydata)==1) // This Code is CONDITION with Call CEKURUT Function
                {
                    break; // If in CekUrut = 1, Do Break or STOP Literation
                }
            for (loop1=0;loop1<manydata-loop2-1;loop1++)
                {
                    // Just Command or Coe to Swapping Data
                    if (myarray[loop1]>myarray[loop1+1]) // Example: Ascending, Index0, More than Index1 Do Swap.
                        {                                // If You want to change to DESCENDING. Just Change ">" to "<"
                            swap = myarray[loop1]; // myarray[loop1] input to swap
                            myarray[loop1] = myarray [loop1+1]; //myarray [loop1+1] input to myarray[loop1]
                            myarray[loop1+1] = swap; // swap input to myarray[loop1+1]
                        }
                }

       // Just Show Bubble Sort Process "How It's Work!"
        printf ("* Process %d: ", loop2+1);
            for (loop1=0;loop1<manydata;loop1++)
                {
                    printf ("%d ", myarray[loop1]);
                }
                printf ("\n");
        }
}
