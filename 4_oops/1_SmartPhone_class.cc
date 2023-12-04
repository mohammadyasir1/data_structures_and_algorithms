#include <iostream>

//creating class
class SmartPhone {
        public:
        //data members 
        int manufacture_year;
        std::string model;
        bool _5g;

        //constructor
        SmartPhone(){//int manufacture, std::string model_name, bool is_5g) {
                this->manufacture_year = manufacture_year;
                this->model = model;
                this->_5g = _5g;
        }

        //method
        void printDetails(){
                std::cout<<"Model : "<<this->model<<std::endl;
                std::cout<<"Manufacture : "<<this->manufacture_year<<std::endl;
                std::cout<<"5g supported : "<<this->_5g<<std::endl;
        }
};

int main() {
        //creating object of a class    
        //SmartPhone iPhone("iPhone 11", 2019, false);

        SmartPhone iPhone;
        iPhone.manufacture_year = 2019;
        iPhone.model = "iPhone 11";
        iPhone._5g = false;
        //calling method
        iPhone.printDetails();

        return 0;
}
