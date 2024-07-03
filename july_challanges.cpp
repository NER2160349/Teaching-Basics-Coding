// Here is what we have done for the month of July

#include <iostream>
using namespace std;

int main(){
/*Challenge 5: Calculate Sum of Numbers fom 1 to 10
int sum;
for(int i = 0; i <=10; i++){
    sum+= i;
}
cout << " The Sum of Numbers fom 1 to 10: " << sum << endl;*/

/*Challenge 6: Calculate 10!
int factorial = 1;
cout << "10! = ";
for(int i = 10; i >=1; i--){
    factorial *= i;
    if(i != 1){
    cout << i << " x ";
    }
    else{
    cout << i << " = ";
    }
}
cout << factorial << endl;*/

/*Challenge 7: Sum of Numbers in an Array
int arr[] = {2,4,6,8,10,12,14,16,18,20};
int sum = 0;
for(int i = 0; i <10; i++){
sum+= arr[i];
}
cout << sum;*/

/*Challenge 8: Average of Numbers in an Array
int arr[6] = {10,10,10,10,10,10};
int average;
int sum = 0;

    for(int i = 0; i < 6; i++){
        sum+= arr[i];
    }
average = (sum / 6);
cout << average << endl;*/

/*Challenge 9: Positive Numbers in an Array 
int arr[10] = {2,-4,6,-8,10,-12,14,-16,18,-20};
cout << "Postive numbers in this array ({2,-4,6,-8,10,-12,14,-16,18,-20}) : " << endl;
for(int i = 0; i < 10; i++){
    if(arr[i] > 1){
        cout << arr[i] << ", ";
    }
    else if(arr[i] > 1 && i == -1){
        cout << arr[i] << ".";
    }
}*/
/*Challenge 10: Maximum number in an array
int arr[10] = {2,-4,6,-8,10,-12,14,-16,18,-20};
int max_value = arr[0];

for(int i = 0; i < 10; i++){
    if(max_value < arr[i]){
        max_value = arr[i];
    } 
}
cout << max_value << endl;*/
   return 0; 
}

