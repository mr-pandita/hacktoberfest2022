#include <iostream>
using namespace std;

void bubbleSort(int *input, int size){
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(input[j] > input[j+1]){
                swap(input[j], input[j+1]);
            }
        }
    }
    
}

int main(){

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}

// Sample Input
// 1
// 7
// 2 13 4 1 3 6 28

// Output: 1 2 3 4 6 13 28
