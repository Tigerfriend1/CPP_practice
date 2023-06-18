#include <algorithm>
#include <complex>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>


using namespace std::complex_literals;

template<typename T>
class List {
//implement
public:
List():_data(nullptr), _size(0), _capacity(0){}
List(List& other):_capacity(other._capacity), _size(other._size){
    _data=new T[_capacity];
    std::copy(other._data,other._data+other._size, _data);
}
~List(){
    delete[] _data;
}
T* begin() const {
    return _data;
}

T* end() const {
    return _data + _size;
}

void add(T z);

void remove(T z);

private:
    void resize();

    T* _data;
    int _size;
    int _capacity;
};

template<typename T>
void List<T>::remove(T z) {
    auto it = std::find(_data, _data+_size,z);
    if (it!=_data+_size){
        std::copy(it+1,_data+_size, it);
        _size--;
    }

}

//implement
template<typename T>
void List<T>::add(T z) {
    if (_size == _capacity) {
        resize();
    }
    _data[_size++] = z;
}

template<typename T>
void List<T>::resize(){
    _capacity++;
    T* new_data=new T[_capacity];
    std::copy(_data,_data+_size,new_data);
    delete[] _data;
    _data=new_data;

}
int main() {
    List<std::complex<double>> complexList;

    std::complex<double> z1 = {0., 0.}, z2 = {1., 1.}, z3 = {2., 2.}, z4 = {3., 3.};
    complexList.add(z1); complexList.add(z2); complexList.add(z3);

    std::vector<std::complex<double>> cTargets = {{0., 0.}, {1., 0.}, {3., 3.}};
    for(auto target : cTargets) {
        auto found = std::find(complexList.begin(), complexList.end(), target);
        if (found != complexList.end()) std::cout << "Found: " << *found << std::endl;
    }

    complexList.add(z4);
    complexList.remove(z1);
    for (auto z : complexList) std::cout << z << std::endl;

    List<std::string> stringList;
    std::string s1 = "abc", s2 = "def", s3 = "ghi", s4 = "jkl";

    stringList.add(s1); stringList.add(s2); stringList.add(s3);

    std::vector<std::string> sTargets = {"ccc", "abc", "jkl"};
    for(auto target : sTargets) {
        auto found = std::find(stringList.begin(), stringList.end(), target);
        if (found != stringList.end()) std::cout << "Found: " << *found << std::endl;
    }

    stringList.add(s4);
    stringList.remove(s1);

    List<std::string> stringList2(stringList);  // copy constructor
    stringList2.add("mno");
    for (auto s : stringList) std::cout << s << " ";
    std::cout << std::endl;

    for (auto s : stringList2) std::cout << s << " ";
    std::cout << std::endl;

    List<std::string> stringList3;
    stringList3 = stringList2;              // copy assignment
    stringList3.remove("jkl");

    for (auto s : stringList2) std::cout << s << " ";
    std::cout << std::endl;
    for (auto s : stringList3) std::cout << s << " ";
    std::cout << std::endl;

    List<int> intList;
    for (int i = 1; i <= 100; ++i) {
        intList.add(i);
    }
    std::cout << std::accumulate(std::begin(intList), std::end(intList), 0) << '\n';

    return 0;
}
