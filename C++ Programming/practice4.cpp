#include<iostream>
#include<cmath>
using namespace std;
class Point{
    int x, y;
    friend double distance(Point p1, Point p2);
    public:
     Point(int a, int b){
         x = a;
         y = b;
     }
     void display(){
         cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
     }
};
double distance(Point d1, Point d2){
    int re = pow(d1.x - d2.x,2)+pow(d1.y - d2.y,2);
    int res = sqrt(re);
    cout<<"The distance is "<<res<<endl;
    return res;
}
int main(){
    Point p(0, 1);
    p.display();
    Point q(1, 6);
    q.display();
    distance(p, q);
    return 0;
}