#include <iostream>
using namespace std;

float readValues(){

}

int firstTask(float x, float y, float z){

}

float secondTask(float x, float y, float z){

}

int main(){
    int vibor;
    float x, y, z;
    cout<<"Выберите действие\n";
    cout<<"№1 Введение числа x\n";
    cout<<"№2 Введение числа y\n";
    cout<<"№3 Введение числа z\n";
    cout<<"№4 Целая часть суммы 3-х чисел\n";
    cout<<"№5 Дрбная часть среднего геометрического модулей 3-х чисел\n";
    cout<<"Введите ноль чтобы завершить выполнение программы\n";
    while(vibor != 0)
    {
        cin>>vibor;
        cin.ignore();
        switch(vibor){
        case 1:
            x = readValues();
            break;
        case 2:
            x = readValues();
            break;
        case 3:
            x = readValues();
            break;
        case 4:
            cout<<firstTask(x, y, z);
            break;
        case 5:
            cout<<secondTask(x, y, z);
            break;
        };
    return 0;
}}