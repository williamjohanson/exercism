#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <string>
#include <iostream>

namespace space_age {   

    class space_age {

        float secondsInEarthYear = 31557600.0;

        float periodMercury = 0.2408467; 
        float periodVenus = 0.61519726;
        float periodMars = 1.8808158; 
        float periodJupiter = 11.862615;
        float periodSaturn = 29.447498;
        float periodUranus = 84.016846;
        float periodNeptune = 164.79132;

        private:
            const unsigned long long AGE_IN_SECONDS;
        public:
            space_age(const unsigned long long &seconds) : AGE_IN_SECONDS(seconds) {};
            ~space_age() {};

        int seconds() const {return AGE_IN_SECONDS;}
        float on_earth() const {return AGE_IN_SECONDS / secondsInEarthYear;}
        float on_mercury() const {return on_earth() / periodMercury;};
        float on_venus() const {return on_earth() / periodVenus;};
        float on_mars() const {return on_earth() / periodMars;};
        float on_jupiter() const {return on_earth() / periodJupiter;};
        float on_saturn() const {return on_earth() / periodSaturn;};
        float on_uranus() const {return on_earth() / periodUranus;};
        float on_neptune() const {return on_earth() / periodNeptune;};
    };

}  // namespace space_age

#endif // SPACE_AGE_H