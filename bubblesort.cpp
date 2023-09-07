#include <bits/stdc++.h>
using namespace std;
void pin (int *e,int *f);
void BBsort(int*arr,int l);




int main (void){
	int arr[] = {4,5,1,3,8,9,6,10,12,2};
	int l = (sizeof(arr) / sizeof(arr[0]));
	BBsort(arr,l);
	for(int k=0;k<10;k++){
		cout << arr[k] << endl;
		
	}
	
	return 0;
	
	
}


void BBsort(int *arr,int l)
{
	for(int i=0;i<(l-1);i++){
		
		for(int j=0;j<l-1-i;j++){
			
			if(arr[j] > arr[j+1]){
				pin(&arr[j],&arr[j+1]);
				
				
			}
			 
		
		}
	}
}



void pin (int *e,int *f)
{
	int temp = *e;
	*e = *f;
	*f = temp;
	
	
	
}
