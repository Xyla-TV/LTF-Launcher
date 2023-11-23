#include <iostream>
#include <fstream>
#include <string>

#include "config.hpp"

bool readConfigFile(const std::string& filename, configData& config) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier de configuration." << std::endl;
        return false;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find("launcher_version_name=") == 0) {
            config.launcher_version_name = line.substr(line.find('=') + 1);
            break;
        }
    }

    file.close();
    return true;
}

int mainConfig() {
    configData config;
    if (readConfigFile("config.cfg", config)) {
        std::cout << "Launcher version: " << config.launcher_version_name << std::endl;
    }

    return 0;
}