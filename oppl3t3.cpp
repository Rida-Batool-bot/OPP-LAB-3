#include <iostream>
#include <string>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    string status;

public:
    SmartDevice(string name, string type, string deviceStatus)//constuctor
    {
        deviceName = name;
        deviceType = type;
        status = deviceStatus;

        cout << "Smart device created successfully." << endl;
        cout << "Device Name: " << deviceName << endl;
        cout << "Device Type: " << deviceType << endl;
        cout << "Device Status: " << status << endl;
        cout << endl;
    }

    ~SmartDevice()//destructor 
    {
        cout << "Smart device " << deviceName << " is powering down forever." << endl;
        cout << "Dear" << deviceType << "you shall never live again" << endl;
        cout << endl;
    }
};

int main()
{
    string name;
    string type;
    string status;

    cout << "enter device name: ";
    getline(cin, name);

    cout << "eter device type for example smart light, robo vacuum, coffee machine: "<< endl;
    getline(cin, type);

    cout << "enter device status on or off?: ";
    getline(cin, status);

    SmartDevice *device1 = new SmartDevice(name, type, status);

    cout << "device is curently running" << endl;
    
    cout << "now deleting the device." << endl;
    cout << endl;

    delete device1;

    cout << "Program has ended." << endl;

    return 0;
}
