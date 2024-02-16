#pragma once
#include <string>

enum ExecType {
    BINARY
};

struct ArgumentInfo {
    std::string mini_help;
    std::string extended_help;
};

template <typename T>
class Argument {
    private:
        bool enabled;
        T value;
        ArgumentInfo info;
        
    public:
        Argument() {}

        const T getValue() const {
            return
        }

        bool enable() {
            enabled = true;
            return enabled;
        }

        bool disable() {
            enabled = false;
            return enabled;
        }
    
};