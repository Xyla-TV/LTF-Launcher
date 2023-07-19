#ifndef DISCORD_RICH_PRESENCE_H
#define DISCORD_RICH_PRESENCE_H

#include <string>

void InitializeDiscordRichPresence();
void UpdateDiscordRichPresence(const std::string& state, const std::string& details, const std::string& largeImageKey);
void ShutdownDiscordRichPresence();

#endif