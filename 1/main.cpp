#include <iostream>

using namespace std;

void output(string& name, float wizardAge);

int main(){
    //get dragon name
    string name;
    cin >> name;

    //get dragon age
    float age;
    cin >> age;

    //age of dragon in wizard years
    float wizardAge = 0;

    if(age <= 2){
        output(name, (float)21 / age);
        return 0;
    }

    age -= 2;

    wizardAge += (age * 4) + 21;
    

    output(name, wizardAge);

    
    return 0;
}

void output(string& name, float wizardAge){
    cout << "The dragon named " + name + " is " << wizardAge << " years old in wizard years.\n";
}