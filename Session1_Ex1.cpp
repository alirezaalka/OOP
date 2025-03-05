#include <iostream>
using namespace std;

class Mercedes {
public:
    bool Start() {
        bool result = Start_engine() && Start_lights_system() && Start_Electric_system();
        return result;
    }
private:
    bool Start_engine() {
        cout << "Engine started" << endl;
        return true;
    }
    bool Start_lights_system() {
        cout << "Lights system started" << endl;
        return true;
    }
    bool Start_Electric_system() {
        cout << "Electric system started" << endl;
        return true;
    }
};

int main() {
    Mercedes Benz;
    bool r = Benz.Start();
    cout << "Car started successfully: " << (r ? "Yes" : "No") << endl;
    return 0;
}