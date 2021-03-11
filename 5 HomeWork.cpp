#include <iostream>
using namespace std;
void print (int array[10]);
int main(){
    int array[10]{ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
    for(int i = 0; i < 10; i++){
        if(array[i] == 0){
            array[i] = 1;
            cout << array[i];
        }
        else{
            array[i] = 0;
            cout << array[i];
        }
    }
cout << "\n";
int numbers [8]{};
numbers [0] = 1;
cout << numbers [0] << " ";
for (int i = 1; i < 8; i++){
    numbers [i] = numbers[i-1] + 3;
    cout << numbers [i] << " ";
}
}