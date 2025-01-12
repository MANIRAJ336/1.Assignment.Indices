
#include<iostream>

using namespace std;

class ArraysSum{
	


int main()
{
    int size;
    int targetSum;
    int resultArray[2];

    cout << "Enter the size of the array: ";
    cin >> size;

    int inputArray[size];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i << ": ";
        cin >> inputArray[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << inputArray[i] << " ";
    }
    
        cout << "Enter the target sum";
        cin >> targetSum;

    for (int i = 0; i < size -1; i++) 
        {
            for (int j = 1; j < size; j++){
                if(inputArray[i] + inputArray[j] == targetSum){
                    resultArray[0] = i;
                    resultArray[1] = j;
                      cout << "Indices of the targetSum array" << resultArray[0] << " and " << resultArray[1];
                }
            }
        }
    return 0;
}

}