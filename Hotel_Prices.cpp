#include <iostream>
#include <vector>

class Hotel_standard{
public:
    Hotel_standard (int bedroom, int bathroom) 
    :  bedroom_1(bedroom), bathroom_1(bathroom){}

    virtual int caculate(){
        return 50*bedroom_1 + 100*bathroom_1;
    }
private:
    int bedroom_1;
    int bathroom_1;
};

class Hotel_apartment : public Hotel_standard {
public:
    Hotel_apartment(int bedrooms, int bathrooms) 
    : Hotel_standard(bedrooms, bathrooms) {}

    int caculate() {
        return Hotel_standard::caculate() + 100;
    }
};

int main() {
    /*HotelRoom* hotel_room;
    HotelApartment* hotel_apartment;
    hotel_room = hotel_apartment;*/
    
    int n;
    std::cin >> n;
    std::vector<Hotel_standard*> rooms;
    for (int i = 0; i < n; ++i) {
        std::string room_type;
        int bedrooms;
        int bathrooms;
        std::cin >> room_type >> bedrooms >> bathrooms;
        if (room_type == "standard") {
            rooms.push_back(new Hotel_standard(bedrooms, bathrooms));
        } else if (room_type == "apartment") {
            rooms.push_back(new Hotel_apartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->caculate();
    }
    std::cout << total_profit << std::endl;

    for (auto room : rooms) {
        delete room;
    }
    rooms.clear();

    return 0;
}
