#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <iostream>
#include <fstream>
#include <string>

struct configData
{
    std::string launcher_version;
};

bool readConfigFile(const std::string& filename, configData& config);

int mainConfig();

#endif