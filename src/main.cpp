#include "platform.h"

int main(void) {
    platform::ConstructWindow();
    while (platform::IdkTempDrawingFunction()) { int a = 3; }
    platform::DestroyWindow();
    return 0;
}
