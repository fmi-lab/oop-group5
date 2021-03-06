### Virtual methods

```cpp
#include <string>
#include <iostream>
class Animal
{
protected:
    std::string m_strName;
 
public:
 Animal(std::string strName)
        : m_strName(strName)
    {
    }
    std::string GetName() { return m_strName; }
    ///const char* Speak() { return "???"; }
    virtual const char* Speak() { return "???"; }
};
 
class Cat: public Animal
{
public:
    Cat(std::string strName)
        : Animal(strName) 
    {
    }
    const char* Speak() { return "Meow"; }
};
 
class Dog: public Animal
{
public:
    Dog(std::string strName)
        : Animal(strName)
    {
    }
    const char* Speak() { return "Woof"; }
};

int main() {
    Dog doggy("Barky"), doggyNumber2("Mooo");
    Cat catty("Meowy"), kitty("Bowie");
    Animal *an[4] = { &doggy, &doggyNumber2, &catty, &kitty };
    for(int i =0; i < 4; i++) {
      std::cout << an[i]->GetName() << " : " << an[i]->Speak() << std::endl;
    }
}
```

### Multiple Inheritance Example:

```cpp
class USBDevice
{
private:
    long USBID;
 
public:
    USBDevice(long ID)
        : USBID(ID)
    {
    }
 
    long getUSBID() { return USBID; }
};
 
class NetworkDevice
{
private:
    long networkID;
 
public:
    NetworkDevice(long ID)
        : networkID(ID)
    {
    }
 
    long getNetworkID() { return networkID; }
};
 
class WirelessAdaptor: public USBDevice, public NetworkDevice
{
public:
    WirelessAdaptor(long lUSBID, long lNetworkID)
        : USBDevice(lUSBID), NetworkDevice(lNetworkID)
    {
    }
};
 
int main()
{
    WirelessAdaptor c54G(5442, 181742);
    cout << c54G.getUSBID();
    cout << c54G.getNetworkID();
    return 0;
}
```

###Diamond Problem

```cpp
class PoweredDevice
{
public:
    PoweredDevice(int nPower)
    {
		cout << "PoweredDevice: " << nPower << endl;
    }
};

/// class Scanner : public PoweredDevice 
class Scanner: virtual public PoweredDevice
{
public:
    Scanner(int nScanner, int nPower)
        : PoweredDevice(nPower)
    {
		cout << "Scanner: " << nScanner << endl;
    }
};
 
/// class Printer : public PoweredDevice  
class Printer: virtual public PoweredDevice
{
public:
    Printer(int nPrinter, int nPower)
        : PoweredDevice(nPower)
    {
		cout << "Printer: " << nPrinter << endl;
    }
};
 
class Copier: public Scanner, public Printer
{
public:
    Copier(int nScanner, int nPrinter, int nPower)
        : PoweredDevice(nPower), Scanner(nScanner, nPower), Printer(nPrinter, nPower)
    {
    }
};
```

Problems are going to be given during the exercise !
