#ifndef LAB3_SUPPORTPACKAGE_H
#define LAB3_SUPPORTPACKAGE_H

#include <iostream>
#include "package.h"

namespace Lab3 {
    class SupportPackage : public Package {
    public:
        SupportPackage(bool installed, const std::string& name, const std::string&, int lastVersion, int installedVersion,
                         const std::string& publisher, const std::vector<std::string>& dependencies)
                : Lab3::Package(installed, name, lastVersion, installedVersion, publisher, dependencies) {}
    };
        void separate() {

        }
    }

#endif //LAB3_SUPPORTPACKAGE_H
