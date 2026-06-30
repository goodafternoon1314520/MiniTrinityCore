#include "../include/Object.h"

Object::Object(uint64_t guid) : guid_(guid) {

}

uint64_t Object::GetGUID() const {
    return guid_;
}