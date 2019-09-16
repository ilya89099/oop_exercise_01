#include "bottle.h"

Bottle::Bottle(double volume, double fill_percent)
: volume_(volume), fill_percent_(fill_percent) {}

double Bottle::GetFilledVolume() const {
    return volume_ * fill_percent_;
}

double Bottle::Sum(const Bottle &other) const {
    return GetFilledVolume() + other.GetFilledVolume();
}

double Bottle::Substract(const Bottle& other) const {
    return GetFilledVolume() - other.GetFilledVolume();
}

bool Bottle::Less(const Bottle &other) const {
    return GetFilledVolume() < other.GetFilledVolume();
}

bool Bottle::More(const Bottle &other) const {
    return GetFilledVolume() > other.GetFilledVolume();
}

bool Bottle::Equal(const Bottle &other) const {
    return GetFilledVolume() == other.GetFilledVolume();
}