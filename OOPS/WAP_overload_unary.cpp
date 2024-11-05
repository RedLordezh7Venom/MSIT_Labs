// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class newclass{
    public:
    int num;
    newclass(int num){
        this->num = num;
    }
    void operator++(){
        this->num += 100;
    }
    newclass operator++(int) { // Store current state
        this->num += 190000;     
        return *this;// Return old state
    }
    void operator--(){
        this->num /= 10;
    }
    newclass operator--(int) { // Store current state
        this->num /= 100;     
        return *this;// Return old state
    }
};
int main() {
    newclass o1(4);
    o1++;
    cout << "Unary Postfix++ "<< o1.num << endl;
    ++o1;
    cout << "Unary Prefix++ "<< o1.num << endl;
    o1--;
    cout << "Unary Postfix-- "<< o1.num << endl;
    --o1;
    cout << "Unary Prefix-- "<< o1.num << endl;
    return 0;
}