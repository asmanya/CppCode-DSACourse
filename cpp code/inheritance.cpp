#include <iostream>
#include <string>

using namespace std;

class Car
{
protected:
    string color;
    string model;
    int year;
    float engine_size;

public:
    car(string c, string m, int y, float e)
    {
        color = c;
        model = m;
        year = y;
        engine_size = e;
    }

    void start()
    {
        cout << "Car started!" << endl;
    }

    void stop()
    {
        cout << "Car stopped!" << endl;
    }

    void accelerate()
    {
        cout << "Car accelerating!" << endl;
    }

    void brake()
    {
        cout << "Car braking!" << endl;
    }
};

class SportsCar : public Car
{
private:
    int top_speed;
    int horsepower;
    float zero_to_sixty;

public:
    SportsCar(string c, string m, int y, float e, int ts, int hp, float zts) : car(c, m, y, e)
    {
        top_speed = ts;
        horsepower = hp;
        zero_to_sixty = zts;
    }

    void drift()
    {
        cout << "Sports car drifting!" << endk;
    }

    void burnout()
    {
        cout << "Sports car burning out!" << endl;
    }

    void launch_control()
    {
        cout << "Sports car using launch control!" << endl;
    }
};

class ElectricCar : public Car
{
private:
    int battery_life;
    int charging_time;

public:
    ElectricCar(string c, string m, int y, float e, int bl, int ct) : Car(c, m, y, e)
    {
        battery_life = bl;
        charging_time = ct;
    }

    void charge()
    {
        cout << "Electric car charging!" << endl;
    }

    void drive()
    {
        cout << "Electric car driving." << endl;
    }
};

class HybridCar : public ElectricCar, public SportsCar
{
public:
    HybridCar(string c, string m, int y, float e, int ts, int hp, float zts, int bl, int ct) : ElectricCar(c, m, y, e, bl, ct), SportsCar(c, m, y, e, ts, hp, zts), Car(c, m, y, e) {}

    void boost()
    {
        cout << "Hybrid car using boost function!" << endl;
    }
};

int main()
{

    return 0;
}