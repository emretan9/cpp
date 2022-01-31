#include<iostream>
using namespace std;

int main(){
	
	int array[5]={64, 25, 12, 22, 11};
	
	
	int i,j,k,index,pass=1;
	for(j=0;j<4;j++){
	int min=array[j];
	//minimum element in our array
	for(i=j;i<5;i++){
		if(min>array[i]){
			min=array[i];
			index=i;
		}
	}
	int temp=array[j];
	array[j]=array[index];
	array[index]=temp;
	cout<<"After pass number "<<pass<<":";
	for(k=0;k<5;k++){
		cout<<array[k]<<", ";
	}
	cout<<endl;
	pass++;
}
	
	
	
	
	
	
	
}
