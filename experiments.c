#include <stdio.h>
#include "array_util.h"
#include "sorts.h"
int main(void)
{
	int i;
	long fore, aft;
	int size = 10000;

	int master[500000];
	int copy[500000];


	char sortArray[3][15] = {"Randomized", "Reverse", "Ordered"};

	printf("running times\n");
	printf("\t\tbubble\tselection\tinsertion\tshell\tmerge\tquick\n");
	
	//interates through the sort methods on a size 10000 array to check the change in run time based on the
	//change is array order. The three starting points are Randomized, reverse, and ordered array.
	for (i = 0; i <= 2; i++) {
		random_array(master, size);
		printf("%s:", sortArray[i]);
	
		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		bubbleSort(copy, size);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		selectionSort(copy, size);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		insertionSort(copy, size);
		aft = get_time_millis();

		printf("\t\t%ld", aft - fore);

		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		shellSort(copy, size);
		aft = get_time_millis();

		printf("\t\t%ld", aft - fore);

		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		mergeSort(copy, size);
		aft = get_time_millis();

		printf("\t%ld", aft - fore);

		copy_array(master, copy, size);
		if(i == 2){
			mergeSort(copy, size);
		}
		else if(i == 1){
			reverseSelectionSort(copy, size);
		}
		fore = get_time_millis();
		quickSort(copy, size);
		aft = get_time_millis();

		printf("\t%ld\n", aft - fore);

	}
	
	

	return 0;
}
