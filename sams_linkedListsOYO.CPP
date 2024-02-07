#include <iostream>

enum
{
    K_I_is_smaller,
    K_I_is_larger,
    K_I_is_same
};

// integers are stored in Data class
class Data
{
private:
    int value;

public:
    // constructor
    // an initialization list. It initializes members before the body of the constructor executes
    // you can immedietely use the variable name as the parameter n the initializaion list
    Data(int newVal) : value(newVal) {}

    // destructor
    ~Data() { std::cout << "Destructor activated"; }

    // using the data address as in the parameter as the actual arguement
    // const because we dont want to be able to modify it once its in as an actual value;
    // soo instead of saying int compare equals ~7 , we're saying int compare is some number
    // the reason why we didnt do int compare; is because we want the number to be a constant and this is the only way to accomplush that
    int compare(const Data &);
    // FUNCTION
    void show() { std::cout << value << std::endl; }
};

// this would be the .cpp file. int compare is 💥DECLARED💥. here, it is defined
// which is why DATA is being ::scoped
//  since theres no public, this is all defaulted to private
// im making a data type called otherdata and storing it in an address of type Data
// the reason why we're scoping Data is bacause we need to use the value variable inside of it
int Data::compare(const Data& otherData)
{
    if (value < otherData.value)
        return K_I_is_smaller;
    if (value > otherData.value)
        return K_I_is_larger;
    else
        return K_I_is_same;
}
