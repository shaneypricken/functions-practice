#include <iostream>
using namespace std;

void countdown();
void customGreeting(string name, int times);
int getFavoriteNumber();
int calculateAverage(int a, int b, int c);

int main() {
    string name;
    int times, a, b, c;
    countdown();
    cout << "What's your name?" << endl;
    cin >> name;
    cout << "What's a random number you can think of that isn't too big" << endl;
    cin >> times;
    customGreeting(name, times);
    int favNumber = getFavoriteNumber();
    cout << "Your favorite number is " << favNumber << endl;
    cout << "Enter number 1: " << endl;
    cin >> a;
    cout << "Enter number 2: " << endl;
    cin >> b;
    cout << "Enter number 3: " << endl;
    cin >> c;
    int avg = calculateAverage(a, b, c);
    cout << "The average is: " << avg << endl;

}

void countdown() {
    for (int i = 10; i>0; i--){
        cout << i << endl;
    }
    cout << "Lift off!" << endl;
}

void customGreeting(string name, int times){
    for (int i = 0; i < times; i ++){
        cout << "Hello, " << name << "!" << endl;
    }
}

int getFavoriteNumber(){
    return 376;
}

int calculateAverage(int a, int b, int c){
    double avg = (a + b + c)/3;
    return avg;
}
