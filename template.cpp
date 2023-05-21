// This program is a calculator in c++ using templates
#include <cmath>
#include <iostream>

using namespace std;

template <class T> class calculator {
  T n1, n2;

public:
  calculator(T num1, T num2) : n1(num1), n2(num2) {}

  T add() { return n1 + n2; }

  T sub() { return n1 - n2; }

  T div() { return this->n1 / this->n2; }

  T mult() { return this->n1 * this->n2; }

  void showResult() {
    cout << "add : " << add() << endl;
    cout << "sub : " << sub() << endl;
    cout << "mult " << mult() << endl;
    cout << "div " << div() << endl;
  }
};

int main() {
  calculator<int> intType(1, 2);
  calculator<float> floatType(1.2, 2.2);

  cout << " int type " << endl;

  intType.showResult();

  cout << " float type : " << endl;

  floatType.showResult();
}
