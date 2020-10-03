#include <iostream>

using namespace std;

class Building
{
    int floors;
    int totalRooms;
    int totalRoomsArea;

public:
    Building()
    {
        floors = 1;
        totalRooms = 1;
        totalRoomsArea = 1;
    }
    Building(int floors, int totalRooms, int totalRoomsArea)
    {
        this->floors = floors;
        this->totalRooms = totalRooms;
        this->totalRoomsArea = totalRoomsArea;
    }

public:
    int getTotalRooms()
    {
        return totalRooms;
    }
};

class House : public Building
{
    int bathrooms;
    int bedrooms;

public:
    House(int bathrooms, int bedrooms) : Building(1, bathrooms + bedrooms, 1)
    {
        this->bathrooms = bathrooms;
        this->bedrooms = bedrooms;
    }

public:
    int getBathrooms()
    {
        return bathrooms;
    }
};

class Office : public Building
{
    int extinguishersCount;
    int phonesCount;

public:
    Office(int extinguishersCount, int phonesCount)
    {
        this->extinguishersCount = extinguishersCount;
        this->phonesCount = phonesCount;
    }

public:
    int getExtinguishersCount()
    {
        return extinguishersCount;
    }
};

int main()
{
    Building building = Building(1, 1, 1);
    cout << building.getTotalRooms() << endl;

    House house = House(1, 1);
    cout << house.getBathrooms() << endl;
    cout << house.getTotalRooms() << endl;

    Office office = Office(1, 1);
    cout << office.getExtinguishersCount() << endl;
    cout << office.getTotalRooms() << endl;
}
