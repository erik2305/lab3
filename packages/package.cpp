#include <iostream>
#include <vector>
#include "package.h"

namespace Lab3 {
    void Package::displayInfo() const {
        std::cout << "Installed: " << installed<< std::endl;
        std::cout << "Package Name: " << name << std::endl;
        std::cout << "Latest Version: " << lastVersion << std::endl;
        std::cout << "Installed Version: " << installedVersion << std::endl;
        std::cout << "Publisher: " << publisher << std::endl;
        std::cout << "Dependencies: ";
        for (const auto &dependency: dependencies) {
            std::cout << dependency << " ";
        }
        std::cout << std::endl;
    }

    void Package::addToRepository(std::unordered_map<std::string, Package>& repository) {
        repository[name] = *this;
        std::cout << "Package '" << name << "' added to the repository." << std::endl;
    }

    void Package::removeFromRepository(std::unordered_map<std::string, Package>& repository) {
        auto it = repository.find(name);
        if (it != repository.end()) {
            repository.erase(it);
            std::cout << "Package '" << name << "' removed from the repository." << std::endl;
        } else {
            std::cout << "Package '" << name << "' not found in the repository." << std::endl;
        }
    }
    void Package::updatePackage(int newVersion) {
        installedVersion = newVersion;
        std::cout << "Package '" << name << "' updated to version " << newVersion << "." << std::endl;
    }

    void Package::getInfoFromRepository(const std::unordered_map<std::string, Package>& repository) const {
        auto it = repository.find(name);
        if (it != repository.end()) {
            std::cout << "Installed: " << it->second.installed<< std::endl;
            std::cout << "Package Name: " <<name << std::endl;
            std::cout << "Latest Version: " << it->second.lastVersion << std::endl;
            std::cout << "Installed Version: " << it->second.installedVersion << std::endl;
            std::cout << "Publisher: " << it->second.publisher << std::endl;
            std::cout << "Dependencies: ";
            for (const auto& dependency : it->second.dependencies) {
                std::cout << dependency << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Package '" << name << "' not found in the repository." << std::endl;
        }
    }
}