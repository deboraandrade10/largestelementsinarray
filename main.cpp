#include <iostream>
using namespace std;

int main() {
    int arrSize = 7;
    int myArray[] = {1, 7, 2, 5, 16, 3, 4};

    int bigNum = myArray[0];
    for(int i = 0; i < arrSize ; i++){
        if(bigNum < myArray[i]){
            bigNum = myArray[i];
        }
    }
    int secBig = myArray[0];
    for(int i = 0; i < arrSize; i++){
        if(secBig < myArray[i] && bigNum != myArray[i]){
            secBig = myArray[i];
        }
    }
    int thirdBig = myArray[0];
    for(int i = 0; i < arrSize; i++){
        if(thirdBig < myArray[i] && secBig != myArray[i] && myArray[i] != bigNum){
            thirdBig = myArray[i];
        }
    }
    cout << bigNum << " " << secBig << " " << thirdBig << endl;

    return 0;
}
