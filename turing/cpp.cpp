#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <memory>

using namespace std;

class Rectangle {
    public:
        int length;
        int width;
    
    Rectangle (int l, int w) {
        length = l;
        width = w;
    }

    int calculateArea() {
        return length * width;
    }
};

class NumberList {
    private:
        vector<int> numbers;
    public:
        void addNumber(int num) {
            numbers.push_back(num);
        }

        int getSum() {
            int sum = 0;

            for (int num : numbers) {
                sum += num;
            }

            return sum;
        }
};


class Car {
    public:
        double price;
        string name;
    
        Car (double prc, int pwr, string nm) : price(prc), power(pwr), name(nm) {};

        void carInfo(){
            cout << "Name: " << name <<endl;
            cout << "Price is: " << fixed << setprecision(2) << price << endl;
            cout << "Power: " << power << endl;
        }

        virtual void drive() {
            cout << "Driving " << name << endl;
        }

        virtual ~Car() {
            cout << "Deleting " << name << endl;
        }
    protected: 
        int power;
};

class Lambo : public Car {
    public:
        string color;

        Lambo (double price, int power, string nm, string c): Car(price, power, nm), color(c) {}; 
        void LamboInfo()
        {
            carInfo();
            cout << "Color: " << color << endl;
        }

        virtual void drive() override {
            cout << "Driving " << color << " " << name << endl;
        }

        virtual ~Lambo() override {
            cout << "Deleting " << color << " "<< name << endl;
        }
};

class Ferrari : public Car {
    public:
        string color;

        Ferrari (double price, int power, string nm, string c): Car(price, power, nm), color(c) {}; 
        void FerrariInfo()
        {
            carInfo();
            cout << "Color: " << color << endl;
        }

        virtual void drive() override {
            cout << "Driving " << color << " " << name << endl;
        }
};



int main() {
    // Rectangle rect(5,8);
    // cout << "The area is: " << rect.calculateArea() << endl;

    // NumberList numList;
    // numList.addNumber(5);
    // numList.addNumber(7);

    // cout << "The sum is: " << numList.getSum() << endl;

    // int* p = new int(42);
    // cout << "Pointer value: " << *p << endl;

    // int arr[] = {1, 2, 3};
    // cout << "Array elements: ";
    // for (int i : arr) {
    //     cout << i << " ";
    // }
    // cout << endl;

    // delete p;

    // cout << *p << endl;

    // p = arr;
    // cout << "Pointer now points to arr[0]: " << *p << endl;

    // cout << *p << endl;

    // Lambo lmb(4500.344535, 34,"Lambo", "Red");
    // lmb.LamboInfo();

    // Car* car1 = new Lambo(4500.344535, 34,"Lambo", "Red");
    // Car* car2 = new Ferrari(4340.344535, 10,"Ferrari", "Black");

    // car1 -> drive();
    // car2 -> drive();

    // delete car1;
    // delete car2;

    // unique_ptr<Car> car1 = make_unique<Lambo>(34728.485, 12, "Lambo", "Red");
    // car1->drive();

    // shared_ptr<Car> car2 = make_shared<Lambo>(3328.485, 10, "Lambo", "Brown");
    // {
    //     shared_ptr<Car> car3 = car2;
    //     car3->drive();
    // }

    // car2->drive();

    return 0;
}