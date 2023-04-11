//

#include <iostream>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int i,j,k;
    j=++arr[2];
    k=arr[1]++;
    i=arr[j++];
    std::cout<<i<<j<<k;
    return 0;
}
