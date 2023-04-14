#include "Temperature.h"
using namespace std;


Temperature::Temperature(double temp, SCALE scale) {
    this->temperature=temp;
    this->scale=scale;
}



Temperature Temperature::add(Temperature other){
    cout<<"other="<<other.scale<<endl;
    double temp;
    if (this->scale==CELSIUS){

        if (other.scale==CELSIUS){
            temp=this->temperature+other.temperature;
        }
        else{
            other.convertToCelsius();
            temp=this->temperature+other.temperature;
        }
        Temperature a = *new Temperature(temp,scale=CELSIUS);
        return a;
    }
    else{
        if (other.scale==FAHRENHEIT){
            temp=this->temperature+other.temperature;
        }
        else{
            other.convertToFahrenheit();
            temp=this->temperature+other.temperature;
        }
        Temperature a = *new Temperature(temp, scale=FAHRENHEIT);
        return a;
    }


}

string Temperature::print() const{
    stringstream ss;
    ss<<fixed;
    ss<<setprecision(1);
    cout<<"Print temp"<<temperature<<" "<<scale<<endl;
    if (this->scale==CELSIUS){
        ss<<temperature<<" C"<<endl;
    }
    else{
        ss<<temperature<<" F"<<endl;
    }
    return ss.str();
}

void Temperature::convertToCelsius(){
    this->temperature=(this->temperature-32)*5/9;
    this->scale=CELSIUS;
}
void Temperature::convertToFahrenheit(){
    this->temperature=this->temperature*9/5+32;
    this->scale=FAHRENHEIT;
}

SCALE getScale(char scale) {
    return scale == 'C' ? CELSIUS : FAHRENHEIT;
}

Temperature createTemperatureFromKeyboard(){
    float degree;
    char scale;
    std::cin >> degree >> scale;
    return Temperature {degree, getScale(scale)};
}


int main() {
    Temperature t1 = createTemperatureFromKeyboard();
    std::cout << t1.print();

    Temperature t2 = createTemperatureFromKeyboard();
    std::cout << t2.print();

    Temperature t3 = t1.add(t2);
    std::cout << t3.print();

    Temperature t4 = t2.add(t1);
    std::cout << t4.print();

    Temperature t5 = t3.add(t4);
    std::cout << t5.print();

    return 0;
}
