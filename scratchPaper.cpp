#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

class TV
{
    // datafields
public:
    int channel;
    int volume;
    bool powerOn;
    // constructor
    TV()
    {
        channel = 1;
        volume = 1;
        powerOn = false;
    }
    // these all below are functions
    //or maybe theyre constructors since none of the damn things have returns
    //cause constructors have no return in them
    void turnOn()
    {
        powerOn = true;
    }
    void turnOff()
    {
        powerOn = false;
        std::cout << "the tv is off, duuh!!! ";
        
    }
    void setChannel(int currentChannel)
    {
        if (powerOn && currentChannel >= 1 && currentChannel <= 120) // channel max, we want it at 120 and min at 1
        {
            channel = currentChannel;
        }
    } // another way to write this is written in the setVolume function
    void setVolume(int currentVolume)
    {
        if (powerOn)
        {
            if (currentVolume <= 100) // volume max, we want it at 100 and min at 1
            {
                volume = currentVolume;
            }
        }
    }
    void channelUp()
    {
        if (powerOn)
        {
            if (channel < 120 && channel >= 1)
            {
                volume++;
            }
        }
    }
    void channelDown()
    {
        if (powerOn == true)
        {
            if (channel > 1)
            {
                channel--;
            }
        }
    }
    void volumeUp()
    {
        if (powerOn)
        {
            if (volume < 100)
            {
                volume++;
            }
        }
    }
    void volumeDown()
    {
        if (powerOn)
        {
            if (volume > 1)
            {
                volume--;
            }
        }
    }

    //++++++++++++++++++++++++++++
};

int main()
{
    std::string tv1 = "tv_1";
    TV tv_1;
    // now, you can run/invoke any constructor
    // cascade lines 23 to 78 so you can just see the names of the functions incase you forgot them
    tv_1.turnOn();
    tv_1.setChannel(55);
    tv_1.setVolume(97);
    tv_1.turnOff();
    tv_1.setVolume(98);

    std::cout << "The selected tv named " << tv1 << "'s volume is at " << tv_1.volume;

    return 0;
}