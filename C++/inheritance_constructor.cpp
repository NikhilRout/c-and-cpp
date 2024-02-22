#include <iostream>
using namespace std;

class area {
protected:  // Change private to protected
    int length;
    int breadth;
public:
    area(int l = 0, int b = 0) : length(l), breadth(b) {}
};

class volume : public area {
private:
    int height;
public:
    volume(int h = 0, int l = 0, int b = 0) : area(l, b), height(h) {}
    
    void getVolume() {
        cout << length * breadth * height << endl;
    }
};

int main() {
    volume v(2, 8, 5);
    v.getVolume();
    return 0;
}
