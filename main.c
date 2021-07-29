//
//  main.c
//  BubbleSort
//
//  Created by duh8n on 2021/07/23.
//

#include <stdio.h>

void BubbleSort(int arr[], int length){
    int i, j;
    int temp;
    
    for(i = 0 ; i < length ; i++){
        for(j = 0 ; j < length - i - 1 ; j ++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int arr[5] = {9, 17, 8, 55, 43};
    int arr_length = sizeof(arr)/sizeof(int);
    BubbleSort(arr, arr_length);
    
    for( int i = 0 ; i < arr_length ; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
