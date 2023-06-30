//
// Created by Romain Caron on 27/06/2023.
//

#ifndef METEO_COUNTRY_H
#define METEO_COUNTRY_H

#include "Zone.h"

class Country : public Zone {
    public:
        Country(std::string name, std::uint8_t inseeCode, std::string isoCode);
};


#endif //METEO_COUNTRY_H
