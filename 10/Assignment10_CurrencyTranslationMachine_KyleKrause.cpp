/*==========================================================

 Title:     Assignment 10 (Final) - C++ Currency Translation Machine
 Course:  	CIS 2252
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/
// Define necessary directives

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <string>

// create your classes here

class ctm {
    public:
        void intro() {
            // 1 - yuan, 2 - euro, 3 - pounds
            std::cin >> currencyType;

            if(currencyType < 0){
                std::cout << "Invalid entry, Please enter a number between 1-3: " << std::endl;
                intro();
            }
            else if(!(currencyType == 1 || currencyType == 2 || currencyType == 3)){
                std::cout << "Invalid entry, Please enter a number between 1-3: " << std::endl;
                intro();
            }


            std::cin >> currencyAmount;

            return;
        }
    protected:
        int     currencyType = 0;
        float   currencyAmount;
};

class amount : public ctm {
    public:
        float conv_amt;
        float conv_fee_amt;
        void calculations() {
            // usd:yuan = 1:6.77, usd:euro = 1:0.98, usd:pounds = 1:0.83
            switch (currencyType){
                case 1:
                    do_calculations(yuan_fac);
                    break;
                case 2:
                    do_calculations(euro_fac);
                    break;
                case 3:
                    do_calculations(pounds_fac);
                    break;
            }

            conv_amt = std::round(conv_amt * 100.0) / 100.0;
            conv_fee_amt = std::round(conv_fee_amt * 100.0) / 100.0;

            return;
        }

        void print() {
            std::cout << currencyAmount << "Currency Type" << std::endl;
            std::cout << conv_amt << " dollars" << std::endl;
            std::cout << conv_fee_amt << " dollars" << std::endl;
            std::cout << conv_amt + conv_fee_amt << " dollars" << std::endl;
        }
    private:
        float yuan_rate     = 6.77f;
        float euro_rate     = 0.98f;
        float pounds_rate   = 0.83f;

        float yuan_fac     = 1 / 6.77f;
        float euro_fac     = 1 / 0.98f;
        float pounds_fac   = 1 / 0.83f;

        float conv_fee      = 0.05f;

        void do_calculations(float factor){
            conv_amt        = currencyAmount * factor;
            conv_fee_amt    = conv_amt       * conv_fee;
        }

};

class rc : public amount {
    public:
        void rctype(){
            
            return;
        }
};

int main()
{
    //No need to modify main as everything should be handled in the classes

    rc obj;
    obj.ctm::intro();
    obj.amount::calculations();
    obj.rctype();

    obj.amount::print();
    return 0;
}