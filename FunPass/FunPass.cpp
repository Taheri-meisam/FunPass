#include <iostream>
#include <vector>
#include <string>


struct points {
    double x;
    double y;
    void print(int x , int y) {
        std::cout << "x :"<< x << "y: " << y <<std::endl;
    }
}p1;



struct courses {
    double math;
    double _3D;
    double Programming1;
    points PointInher;
};
struct student {
    std::string name;
    std::string stdID;
    courses StdCours = { 10,10,10 };

};


std::vector<student> studentVector;
int main() {
    courses c1;
    c1.PointInher.print(1, 4);
    points p2;
    p1.x = 10;
    p2.x = 20;
    p1.y = 100;
    p2.y = 300;
    //Array 
    student structArr[100];

    for (int i = 0; i < 2; i++) {
        std::cout << "enter name : ";
        std::cin >> structArr[i].name;
        std::cout << "enter ID : ";
        std::cin >> structArr[i].stdID;
        std::cout << "enter math score : ";
        std::cin >> structArr[i].StdCours.math;
        std::cout << "enter programming score : ";
        std::cin >> structArr[i].StdCours.Programming1;
        std::cout << "enter 3D score  : ";
        std::cin >> structArr[i].StdCours._3D;
    }

    for (int i = 0; i < 2; i++) {
        std::cout << "student "<< i+1 <<  " name : " << structArr[i].name << std::endl;
        
        std::cout << "student " << i + 1 << " ID : " << structArr[i].stdID << std::endl;
        std::cout << "student " << i + 1 << " math score : " << structArr[i].StdCours.math << std::endl;
   
        std::cout << "student " << i + 1 << " programming score : "<< structArr[i].StdCours.Programming1 << std::endl;
 
        std::cout << "student " << i + 1 << "enter 3D score  : " << structArr[i].StdCours._3D << std::endl;

    }

    std::cout << "--------------------------------------------------------------"<< std::endl;
    // Vector 
    student s1;
    s1.name = "Meisam";
    s1.stdID = "1234455";
    s1.StdCours._3D = 90;
    s1.StdCours.math = 100;
    s1.StdCours.Programming1 = 100;
    studentVector.push_back(s1);

    for (auto a : studentVector) {
        std::cout << a.name << std::endl;
        std::cout << a.stdID << std::endl;
        std::cout << a.StdCours.Programming1 << std::endl;
        std::cout << a.StdCours._3D << std::endl;
        std::cout << a.StdCours.math << std::endl;
    }

    


    return 0;
}


/*


#include <iostream>
#include <vector>

void Vec(std::vector<std::string> VbyValue);
void Vec2(std::vector<std::string> &VbyRef);



void Vec(std::vector<std::string> VbyValue) {

    VbyValue.at(0) = "This will be empty";
}
void Vec2(std::vector<std::string>& VbyRef) {

    VbyRef.at(0) = "This will be empty";
}







void passbyValue(int);

void passbyRef(int&);


void passbyValue(int passval) {
    
    passval = 100;

}

void passbyRef(int& refVal) {

    refVal = 100;

}



int main()
{
    int passValue = 1;
    int RefValue  = 2;
   


    std::cout << "passValue before calling the function " << passValue << std::endl;
    passbyValue(passValue);
    std::cout << "passValue after  calling the function " << passValue << std::endl;


    std::cout << "Passby reference before calling the function " << RefValue << std::endl;
    passbyRef(RefValue);
    std::cout << "passValue after  calling the function " << RefValue << std::endl;



    // Vector 

    std::cout << "\t ---------------------------------------- " << std::endl;

    std::vector <std::string> V1 = {"V1value1", "V2value2"};
    std::vector <std::string> V2 = { "V2me", "V2you" };

    std::cout << " Vector 1 before calling function ";
    for (auto a : V1) {
        std::cout << a << " " ;
    }


    std::cout << std::endl;
    std::cout << " vector 2 before calling function " ;
    for (auto b : V2) {
        std::cout << b << " ";
    }

    std::cout << std::endl;
    Vec(V1);
    Vec2(V2);

    std::cout << "after calling function " << std::endl;
    std::cout << " pass by value  : ";
    for (auto a : V1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    std::cout << " pass by reference   : ";

    for (auto b : V2) {
        std::cout << b << " ";
    }

}

*/