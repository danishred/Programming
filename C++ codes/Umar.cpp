
///------------Number 1-------------------
/*#include <bits/stdc++.h>
//run kr isko ek barr kar diye
using namespace std;
 
#define N 4
 
// Function to rotate the matrix 90 degree clockwise

void rotate90Clockwise(int a[N][N])
{
 

    // Traverse each cycle

    for (int i = 0; i < N / 2; i++) {

        for (int j = i; j < N - i - 1; j++) {
 

            // Swap elements of each cycle

            // in clockwise direction

            int temp = a[i][j];

            a[i][j] = a[N - 1 - j][i];

            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];

            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];

            a[j][N - 1 - i] = temp;

        }

    }
}
 
// Function for print matrix

void printMatrix(int arr[N][N])
{

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++)

            cout << arr[i][j] << " ";

        cout << '\n';

    }
}
 
// Driver code

int main()
{
    int t, n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int** arr;
        arr = new int[n];
        for(int i = 0;i <n;i++){
            arr[i] = new int[n];
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                cin >> arr[i][j];
            }
        }
        rotate(arr, n);
        if(t!=0)
            printf("\n");
    }
    return 0;
    int arr[N][N] = { { 1, 2, 3, 4 },

                      { 5, 6, 7, 8 },

                      { 9, 10, 11, 12 },

                      { 13, 14, 15, 16 } };

    rotate90Clockwise(arr);

    printMatrix(arr);
   return 0;
}
//ek dum shi h ek min ruk
bhai log*/


///------------Number 2-------------------

#include<bits/stdc++.h>
using namespace std;

int getMajorityElement(int arr[], int size)
{
    int maxCount = 0;
    int index = -1; // sentinels
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        // update maxCount if count of
        // current element is greater
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
    // if maxCount is greater than n/2
    // return the corresponding element
    if (maxCount > size / 2)
        cout << arr[index] << endl;
 
    else
        cout << "No Majority Element" << endl;
}

int main()
{
	int i,size;
	scanf("%d",&size);
	int array[size];
	for(i=i;i<size;i++)
	 scanf("%d",&array[i]);
	printf("%d",getMajorityElement(array,size));
	return 0;
}


///------------Number 3-------------------




///------------Number 4-------------------
