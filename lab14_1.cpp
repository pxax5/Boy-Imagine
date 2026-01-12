#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[], int N){
    for (int i = 1; i < N; i++){
        T d_swap = d[i];
        int j = i - 1;

        while (j >= 0 && d[j] < d_swap)
        {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = d_swap;

        cout << "Pass " << i << ":";
        for (int k = 0; k < N; k++)
            cout << d[k] << " ";
        cout << endl;
    }
}