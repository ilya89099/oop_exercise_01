#pragma once

class Bottle {
public:

    Bottle(double volume, double fill_percent);

    double GetVolume() const;
    double GetFillPercent() const;

    double GetFilledVolume() const;

    double Sum(const Bottle& other) const;
    double Substract(const Bottle& other) const;

    bool Less(const Bottle& other) const;
    bool More(const Bottle& other) const;
    bool Equal(const Bottle& other) const;

private:
    double volume_;
    double fill_percent_;
};


