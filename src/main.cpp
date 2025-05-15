#include "platform.h"

int main(void) {
    platform::ConstructWindow();
    while (platform::IdkTempDrawingFunction()) {};
    platform::DestroyWindow();
    return 0;
}
