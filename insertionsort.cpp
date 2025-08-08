/*	Application: When playing card games, players often use an approach
 *  similar to insertion sort to  organize their cards.
 *  They pick one card at a time and insert it into the correct        	 
 * position in their hand, maintaining a sorted sequence.
 * Write a program that demonstrates how to organize (sort) cards
 * in a hand using insertion sort*/
 
 
#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	int temp;
	//Take size of array
	cout<<"Enter the number of cards in hand:";
	cin>>n;
	int cards[n];
    
	//Enter values for cards
    
	cout<<"Enter "<<n<<" Cards number:"<<endl;
	for(i=0;i<n;i++){
    	cin>>cards[i];
    	}
   	 
	for (i = 1; i < n; i++) {
	temp = cards[i];
	j = i - 1;
    
	//Move elements of cards
	while (j >= 0 && cards[j] > temp) {
	cards[j + 1] = cards[j];
	j--;
    
	}
    
	cards[j + 1] = temp;
    
    	//Print array after each pass.
	int k;
	cout << "After pass " << i << ": ";
    	for (k = 0; k < n; k++) {
        	cout << cards[k] << " ";
    	}
    	cout << endl;
    
	}
	//Print final Sorted array
    
	cout << "Sorted cards: ";
    
	for (i = 0; i < n; i++) {
	cout << cards[i] << " ";
	}
    
	return 0;
}
