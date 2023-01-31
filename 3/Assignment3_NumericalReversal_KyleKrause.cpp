#include <iostream>
#include <string>
#include <sstream>

int main(){
    using namespace std;

    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);

    int length = stoi(s1);

    int *arr = new int[length];
    
    
    stringstream ststr(s2);
    int item;
    int index = 0;
    while (ststr >> item){
        arr[index] = item;
        index++;
    }

    
    for(int i = length - 1; i >= 0; i--){
        cout << arr[i] << " ";
    }

    cout << endl;


    delete arr;
    return 0;
}