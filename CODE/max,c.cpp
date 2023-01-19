#include<stdio.h>
int main(){
//	print largest no in array
    int arr[5] = {91,52,12,45,99};
    int max = arr[0];
    int i = 1;
    while(i < 5){
    	if(arr[i] > max){ //52 > 91
    		max = arr[i];
		}
	}
	printf("Largest: %d,", max);
}
