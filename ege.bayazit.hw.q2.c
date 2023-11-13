#include <stdio.h>

void analyzeArray(int [],int);  // the function which will calculate and print the average of the array

void PerformQuantumAnalytics(int );  // the function which will check if the sorted array's first value is prime or not

int main(){
	
	int Quantium[7], i, ind;
	float avg;
	
	printf("Enter 7 quantum elements: \n");
	
	for(i=0;i<7;i++)
		scanf("%d",&Quantium[i]);  // sorting the array
	
	printf("Enter the index of the Quantium element to be modified: ");
	scanf("%d",&ind);  // getting input for modifying
	
	if(Quantium[ind]%2==0)
		Quantium[ind]*=2;  // checking if the number is even or odd
	else
		Quantium[ind]/=2;

	printf("Newly generated Quantium: "); 
	for(i=0;i<7;i++)
		printf("%d ",Quantium[i]);   // generating the new array
				
	analyzeArray(Quantium, 7);
	
	for(i=0;i<6;i++)
	{
		for(int j=0;j<6-i;j++){
			if(Quantium[j] > Quantium[j+1]){    // sorting the array from smallest to largest
				int temp = Quantium[j];
				Quantium[j] = Quantium[j+1];
				Quantium[j+1] = temp;
			}
		}
	}
	printf("\nSorted elements: \n");
		for(i=0;i<7;i++)
		printf("%d ",Quantium[i]);
	
	PerformQuantumAnalytics(Quantium[0] );  // checking if the first element is prime or not

	return 0;	
		
	}

void analyzeArray(int Arr[], int ind){
	
	int i;
	float avg=0, sum=0;
	for(i=0;i<ind;i++)    //  finding average
		sum += Arr[i];
	avg= sum/ind;
	printf("\nAverage value of modified elements: %.2f",avg);
	
}

void PerformQuantumAnalytics(int a){
	int i, counter=0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
			counter++;  // checking if the number has any other dividers other than 1
		
	}
	if(counter==1)
		printf("\nThe first element in the sorted array is a prime number.");
	else
		printf("\nThe first element in the sorted array is not a prime number.");
	
}
	
	
	
	
	
	
	
	
