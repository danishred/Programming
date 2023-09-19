bool isIncreasing(int arr[], int l, int r)
{
    for (int i = l + 1; i <= r; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}
bool isDecreasing(int arr[], int l, int r)
{
    for (int i = l + 1; i <= r; i++)
    {
        if (arr[i - 1] < arr[i])
            return false;
    }
    return true;
}
bool decRotated(int arr[], int n, int minIndex, int maxIndex)
{
    if (arr[0] > arr[n - 1])
        return false;

    return isDecreasing(arr, 0, minIndex) && isDecreasing(arr, maxIndex, n - 1);
}
bool incRotated(int arr[], int n, int minIndex, int maxIndex)
{
    if (arr[0] < arr[n - 1])
        return false;

    return isIncreasing(arr, 0, maxIndex) && isIncreasing(arr, minIndex, n - 1);
}

bool checkRotatedAndSorted(int arr[], int n)
{

    // Your code here
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndex])
            minIndex = i;

        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    bool res = false;

    if (maxIndex == minIndex - 1)
    {
        res = incRotated(arr, n, minIndex, maxIndex);
    }

    if (minIndex == maxIndex - 1)
    {
        res = decRotated(arr, n, minIndex, maxIndex);
    }

    return res;
}
// Time Complexity: Θ(n/2)
// Auxiliary Space: Θ(1)

int main()
{
    int n = 5;
    int arr[] = {30, 7, 6, 5, 10};
    reverseArr(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
