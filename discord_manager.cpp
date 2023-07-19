#include "discord_rich_presence.h"

void InitDiscord() {
    InitializeDiscordRichPresence();
}

void SetDiscordActivity() {
    UpdateDiscordRichPresence("En jeu", "Niveau 10", "abwfr_icon");
}

void CleanupDiscord() {
    ShutdownDiscordRichPresence();
}