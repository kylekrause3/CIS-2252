/*==========================================================

 Title:     Assignment 9 - C++ Wizard Creature Department
 Course:  	CIS 2252
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/

#include <iostream>

using namespace std;

//Write classes here...

class Creature {
    public:
        Creature(){
            
        }
        
        Creature(string name, int quantity){
            this->name = name;
            this->quantity = quantity;
        }
        
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return this->name;
        }
        void setQuantity(int quantity) {
            this->quantity = quantity;
        }
        int getQuantity(){
            return this->quantity;
        }
        
        void printStatement(){
            cout << "There's " << this->quantity << " creatures named " << this->name << endl;
        }
    protected:
        string name;
        int quantity;
        string type = "unknown";
};

class Phoenix : public Creature {
    public:
        Phoenix(){
            this->type = "phoenix";
        }
        void setColor(string color){
            this->color = color;
        }
        string getColor(){
            return this->color;
        }
        
        void printStatement(){
            cout << "There's " << this->quantity << " " << this->color << " phoenixes named " << this->name << endl;
        }
    protected:
        string color;
};

class Basilisk : public Creature {
    public:
        Basilisk(){
            this->type = "Basilisk";
        }
        
        void printStatement(){
            cout << "There's 1 basilisk named " << this->name << endl;
        }
};

int main()
{
	//create empty array of size 3 for storing name
    string nameArr[3];

	// Write loop here to record user input as names
    // and set third name to “Clover”
    
    cin >> nameArr[0];
    cin >> nameArr[1];
    nameArr[2] = "Clover";
    

	Creature c(nameArr[0], 2);
	//print statement from class
	c.printStatement();

	Phoenix p;
	//sets name, quantity and color
	p.setName(nameArr[1]);
	p.setQuantity(3);
	p.setColor("golden");
    //print statement from class
	p.printStatement();

	Basilisk b;
    //sets name
	b.setName(nameArr[2]);
    //prints statement from class
	b.printStatement();

    
}

