#ifndef LAB3_PACKAGE_H
#define LAB3_PACKAGE_H

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

namespace Lab3 {
    class Package {
    private:
        bool installed;
        std::string name, publisher;
        int lastVersion, installedVersion;
        std::vector<std::string> dependencies;
    public:
        Package(bool installed, const std::string& name, int lastVersion, int installedVersion,
                const std::string& publisher, const std::vector<std::string>& dependencies)
                : installed(installed), name(name), lastVersion(lastVersion), installedVersion(installedVersion),
                  publisher(publisher), dependencies(dependencies) {}
        Package(const std::string& name){

        }

        void addToRepository(std::unordered_map<std::string, Package>& repository);
        void getInfoFromRepository(const std::unordered_map<std::string, Package>& repository) const;
        void removeFromRepository(std::unordered_map<std::string, Package>& repository);
        void updatePackage(int newVersion);

        void displayInfo() const;

    };

}

#endif //LAB3_PACKAGE_H
