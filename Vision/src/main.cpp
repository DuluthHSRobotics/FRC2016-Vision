#include <iostream>
#include "networktables/NetworkTable.h"

class Vision
{
public:
    std::shared_ptr<NetworkTable> table;

    Vision(void) {
        table = NetworkTable::GetTable("vision");
        table->PutNumber("X", 5);
    }
};

int main(int argc, const char* argv[])
{
    Vision vision;
    std::cin.ignore();
}
