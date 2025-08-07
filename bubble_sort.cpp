#include<iostream> 
using namespace std; 
int main(){ 
int n=5, temp; 
int player1[n], player2[n]; 
int total1=0, total2=0; 
cout<<"Enter scores of player 1(out of 100):\n"; 
for (int i=0; i<n; i++){ 
cin>>player1[i]; 
} 
for(int i=0; i<n-1; i++){ 
for (int j=0; j<n-1-i; j++) { 
if (player1[j]>player1[j + 1]) { 
temp =player1[j]; 
player1[j]=player1[j + 1]; 
player1[j + 1]=temp; 
} 
} 
}   
cout<<"Enter scores of player 2(out of 100):"<<endl; 
for (int i = 0; i < n; i++) { 
cin>>player2[i]; 
} 
for (int i=0; i<n-1; i++) { 
for (int j=0; j<n-1-i; j++) { 
if (player2[j]>player2[j + 1]) { 
temp =player2[j]; 
player2[j] =player2[j + 1]; 
player2[j + 1] =temp; 
} 
} 
}   
cout<<"Sorted scores of player 1:"<<endl; 
for (int i = 0; i < n; i++) { 
cout<<player1[i]<<" "; 
total1 += player1[i]; 
} 
cout<<"\nTotal score of player 1 : "<< total1;
cout<<endl; 
cout<<"Sorted scores of player 2:"<<endl; 
for (int i = 0; i < n; i++) { 
cout<<player2[i]<<" "; 
total2 += player2[i]; 
} 
cout<<"\nTotal score of player 2 : "<< total2;
cout << "\nResult: "; 
if (total1>total2) { 
cout<<"Player 1 Level Ups!!Hurray!!"<<endl; 
} else if(total2 > total1) { 
cout<<"Player 2 Level Ups!!Hurray!!"<<endl; 
} else{ 
cout<<"It's a tie!"<<endl; 
} 
return 0; 
} 