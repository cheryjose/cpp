#include "string"
#include "iostream"

using namespace std;

class Car
{
    public:
        Car(std::string make, int year, std::string model):p_make(make), p_year(year), p_model(model)
        {}  
        std::string getModel() {
            return p_model;
        };
    private:
        std::string p_make {};
        int p_year {};
        std::string p_model {};
};
